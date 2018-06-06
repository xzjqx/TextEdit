#include "TextEditor.h"

TextEditor::TextEditor(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.actionNew, SIGNAL(triggered()), this, SLOT(New()));
	connect(ui.actionOpen, SIGNAL(triggered()), this, SLOT(Open()));
	connect(ui.actionSave, SIGNAL(triggered()), this, SLOT(Save()));
	connect(ui.actionSave_As, SIGNAL(triggered()), this, SLOT(SaveAs()));
	connect(ui.actionPrint, SIGNAL(triggered()), this, SLOT(Print()));
	connect(ui.actionPrint_Preview, SIGNAL(triggered()), this, SLOT(PrintPreview()));
	connect(ui.actionExit, SIGNAL(triggered()), this, SLOT(Exit()));

	connect(ui.actionUndo, SIGNAL(triggered()), this, SLOT(Undo()));
	connect(ui.actionRedo, SIGNAL(triggered()), this, SLOT(Redo()));
	connect(ui.actionCut, SIGNAL(triggered()), this, SLOT(Cut()));
	connect(ui.actionCopy, SIGNAL(triggered()), this, SLOT(Copy()));
	connect(ui.actionPaste, SIGNAL(triggered()), this, SLOT(Paste()));

	connect(ui.actionBold, SIGNAL(triggered()), this, SLOT(Font()));
	connect(ui.actionItalic, SIGNAL(triggered()), this, SLOT(Font()));
	connect(ui.actionUnderline, SIGNAL(triggered()), this, SLOT(Font()));
	connect(ui.actionColor, SIGNAL(triggered()), this, SLOT(Color()));

	connect(ui.actionAbout, SIGNAL(triggered()), this, SLOT(About()));
	connect(ui.actionAbout_Qt, SIGNAL(triggered()), qApp, SLOT(aboutQt()));

	New();
}

QString fileName;
bool isSaved;

void TextEditor::changeTitle() {
	QString title;
	QStringList name = fileName.split("/");
	title = "Text Editor - " + name.last();
	this->setWindowTitle(title);
}

void TextEditor::textChanged() {
	isSaved = false;
}

void TextEditor::saveBox() {
	QMessageBox * mBox = new QMessageBox(this);
	QString message;
	mBox->setWindowTitle(QString::fromLocal8Bit("Note"));
	if (fileName == "")
		message = "The file hasn't been saved";
	else
		message = "Save the file to\n" + fileName;
	mBox->setText(message);
	mBox->setStandardButtons(QMessageBox::StandardButton::Ok | QMessageBox::StandardButton::Cancel);
	mBox->setButtonText(QMessageBox::StandardButton::Ok, QString::fromLocal8Bit("Save"));
	mBox->exec();
	QMessageBox::StandardButton ret = mBox->standardButton(mBox->clickedButton());
	if (ret == QMessageBox::Ok)
		Save();
}

void TextEditor::New() {
	if (isSaved == false && ui.textEdit->toPlainText() != "") {
		saveBox();
	}
	ui.textEdit->clear();
	this->setWindowTitle("Text Editor");
	fileName == "";
	isSaved = true;
}

void TextEditor::Open() {
	if (isSaved == false) {
		saveBox();
	}
	fileName = QFileDialog::getOpenFileName(this, tr("Open"), QString(), tr("HTML document (*.htm *.html);;all file(*.*)"));
	QFile file(fileName);

	if (file.open(QIODevice::ReadOnly)) {
		QByteArray data = file.readAll();
		QTextCodec *codec = Qt::codecForHtml(data);
		QString str = codec->toUnicode(data);
		if (Qt::mightBeRichText(str)) {
			ui.textEdit->setHtml(str);
		}
		else {
			str = QString::fromLocal8Bit(data);
			ui.textEdit->setPlainText(str);
		}

		/*QTextStream textStream(&file);
		ui.textEdit->clear();
		while (!textStream.atEnd()) {
			ui.textEdit->append(textStream.readLine());
		}*/
		file.close();
		isSaved = true;
		changeTitle();
	}
}

void TextEditor::Save() {
	if (isSaved == true) {
		QMessageBox::about(this, "Note", "The file is saved");
		return;
	}
	if (fileName == "") {
		SaveAs();
	}
	else {
		qDebug() << fileName;
		QTextDocumentWriter writer(fileName);
		writer.write(ui.textEdit->document());
		QMessageBox::about(this, "Note", "You have saved the file to\n" + fileName);
		isSaved = true;
		/*
		QFile file(fileName);
		if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
			QTextDocumentWriter writer(fileName);
			writer.write(ui.textEdit->document());
			QTextStream textStream(&file);
			QString str = ui.textEdit->toPlainText();
			textStream << str;
			file.close();
			QMessageBox::about(this, "Note", "You have saved the file to\n" + fileName);
			isSaved = true;
		}*/
	}
}

void TextEditor::SaveAs() {
	fileName = QFileDialog::getSaveFileName(this, tr("Save"), QString(), tr("HTML document (*.htm *.html);;all file(*.*)"));
	if (fileName == "") {
		return;
	}
	QTextDocumentWriter writer(fileName);
	writer.write(ui.textEdit->document());
	QMessageBox::about(this, "Note", "You have saved the file to\n" + fileName);
	isSaved = true;
	changeTitle();
	/*
	QFile file(fileName);
	if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
		QTextStream textStream(&file);
		QString str = ui.textEdit->toPlainText();
		textStream << str;
		file.close();
		isSaved = true;
		changeTitle();
	}*/
}

void TextEditor::Print() {
	QPrinter printer;
	QString printerName = printer.printerName();
	if (printerName.size() == 0)
		return;
	QPrintDialog dlg(&printer, this);
	if (dlg.exec() == QDialog::Accepted) {
		ui.textEdit->print(&printer);
	}
}

void TextEditor::printPreview(QPrinter *printer)
{
	ui.textEdit->print(printer);
}

void TextEditor::PrintPreview() {
	QPrinter printer;
	QPrintPreviewDialog preview(&printer, this);
	connect(&preview, SIGNAL(paintRequested(QPrinter*)), this, SLOT(printPreview(QPrinter*)));
	preview.exec();
}

void TextEditor::Exit() {
	if (isSaved == false) {
		saveBox();
	}
	this->close();
}

void TextEditor::Undo() {
	ui.textEdit->undo();
	isSaved = false;
}

void TextEditor::Redo() {
	ui.textEdit->redo();
	isSaved = false;
}

void TextEditor::Cut() {
	ui.textEdit->cut();
	isSaved = false;
}

void TextEditor::Copy() {
	ui.textEdit->copy();
}

void TextEditor::Paste() {
	ui.textEdit->paste();
	isSaved = false;
}

void TextEditor::mergeFormat(QTextCharFormat format) {
	QTextCursor cursor = ui.textEdit->textCursor();
	if (!cursor.hasSelection())
		cursor.select(QTextCursor::WordUnderCursor);
	cursor.mergeCharFormat(format);
	ui.textEdit->mergeCurrentCharFormat(format);
}

void TextEditor::Font() {
	QTextCharFormat fmt;
	fmt.setFontWeight(ui.actionBold->isChecked() ? QFont::Bold : QFont::Normal);
	fmt.setFontItalic(ui.actionItalic->isChecked());
	fmt.setFontUnderline(ui.actionUnderline->isChecked());
	mergeFormat(fmt);
	isSaved = false;
}

void TextEditor::Color() {
	QColor color = QColorDialog::getColor(Qt::white, this);
	QTextCharFormat fmt;
	fmt.setForeground(color);
	mergeFormat(fmt);
	isSaved = false;
}

void TextEditor::About() {
	AboutBox *ab = new AboutBox;
	qDebug() << "About";
	ab->show();
	//QMessageBox::about(this, tr("About"), tr("This is a simple text editor. Powered by Xiao Jian"));
}