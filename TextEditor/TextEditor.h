#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TextEditor.h"
#include "qdesktopservices.h"
#include "qfiledialog.h"
#include "qtextstream.h"
#include "qmessagebox.h"
#include "qdebug.h"
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>
#include <QPrintPreviewDialog>
#include <QColorDialog>
#include <QTextCharFormat>
#include <QTextDocumentWriter>
#include <QTextCodec>
#include "AboutBox.h"

class TextEditor : public QMainWindow
{
	Q_OBJECT

public:
	TextEditor(QWidget *parent = Q_NULLPTR);
	void changeTitle();
	void saveBox();
	void mergeFormat(QTextCharFormat format);

private:
	Ui::TextEditorClass ui;

private slots:
	void textChanged();
	void New();
	void Open();
	void Save();
	void SaveAs();
	void Print();
	void printPreview(QPrinter *printer);
	void PrintPreview();
	void Exit();

	void Undo();
	void Redo();
	void Cut();
	void Copy();
	void Paste();

	void Font();
	void Color();

	void About();
};
