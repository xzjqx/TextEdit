/********************************************************************************
** Form generated from reading UI file 'TextEditor.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTEDITOR_H
#define UI_TEXTEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextEditorClass
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionPrint;
    QAction *actionPrint_Preview;
    QAction *actionExit;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionColor;
    QAction *actionBold;
    QAction *actionItalic;
    QAction *actionUnderline;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menufile;
    QMenu *menuEdit;
    QMenu *menuFormat;
    QMenu *menuFont;
    QMenu *menuHelp;
    QToolBar *File;
    QToolBar *Edit;
    QToolBar *Format;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TextEditorClass)
    {
        if (TextEditorClass->objectName().isEmpty())
            TextEditorClass->setObjectName(QStringLiteral("TextEditorClass"));
        TextEditorClass->resize(931, 548);
        actionNew = new QAction(TextEditorClass);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/TextEditor/Resources/icons/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(TextEditorClass);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/TextEditor/Resources/icons/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(TextEditorClass);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/TextEditor/Resources/icons/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSave_As = new QAction(TextEditorClass);
        actionSave_As->setObjectName(QStringLiteral("actionSave_As"));
        actionPrint = new QAction(TextEditorClass);
        actionPrint->setObjectName(QStringLiteral("actionPrint"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/TextEditor/Resources/icons/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon3);
        actionPrint_Preview = new QAction(TextEditorClass);
        actionPrint_Preview->setObjectName(QStringLiteral("actionPrint_Preview"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/TextEditor/Resources/icons/printPreview.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint_Preview->setIcon(icon4);
        actionExit = new QAction(TextEditorClass);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/TextEditor/Resources/icons/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon5);
        actionUndo = new QAction(TextEditorClass);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/TextEditor/Resources/icons/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon6);
        actionRedo = new QAction(TextEditorClass);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/TextEditor/Resources/icons/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon7);
        actionCut = new QAction(TextEditorClass);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/TextEditor/Resources/icons/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon8);
        actionCopy = new QAction(TextEditorClass);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/TextEditor/Resources/icons/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon9);
        actionPaste = new QAction(TextEditorClass);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/TextEditor/Resources/icons/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon10);
        actionColor = new QAction(TextEditorClass);
        actionColor->setObjectName(QStringLiteral("actionColor"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/TextEditor/Resources/icons/color.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionColor->setIcon(icon11);
        actionBold = new QAction(TextEditorClass);
        actionBold->setObjectName(QStringLiteral("actionBold"));
        actionBold->setCheckable(true);
        actionBold->setChecked(false);
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/TextEditor/Resources/icons/bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBold->setIcon(icon12);
        actionItalic = new QAction(TextEditorClass);
        actionItalic->setObjectName(QStringLiteral("actionItalic"));
        actionItalic->setCheckable(true);
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/TextEditor/Resources/icons/italic.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionItalic->setIcon(icon13);
        actionUnderline = new QAction(TextEditorClass);
        actionUnderline->setObjectName(QStringLiteral("actionUnderline"));
        actionUnderline->setCheckable(true);
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/TextEditor/Resources/icons/underline.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUnderline->setIcon(icon14);
        actionAbout = new QAction(TextEditorClass);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionAbout_Qt = new QAction(TextEditorClass);
        actionAbout_Qt->setObjectName(QStringLiteral("actionAbout_Qt"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/TextEditor/Resources/icons/aboutQt.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout_Qt->setIcon(icon15);
        centralWidget = new QWidget(TextEditorClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QFont font;
        font.setFamily(QStringLiteral("Consolas"));
        font.setPointSize(14);
        textEdit->setFont(font);

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        TextEditorClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TextEditorClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 931, 26));
        menufile = new QMenu(menuBar);
        menufile->setObjectName(QStringLiteral("menufile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuFormat = new QMenu(menuBar);
        menuFormat->setObjectName(QStringLiteral("menuFormat"));
        menuFont = new QMenu(menuFormat);
        menuFont->setObjectName(QStringLiteral("menuFont"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        TextEditorClass->setMenuBar(menuBar);
        File = new QToolBar(TextEditorClass);
        File->setObjectName(QStringLiteral("File"));
        TextEditorClass->addToolBar(Qt::TopToolBarArea, File);
        Edit = new QToolBar(TextEditorClass);
        Edit->setObjectName(QStringLiteral("Edit"));
        TextEditorClass->addToolBar(Qt::TopToolBarArea, Edit);
        Format = new QToolBar(TextEditorClass);
        Format->setObjectName(QStringLiteral("Format"));
        TextEditorClass->addToolBar(Qt::TopToolBarArea, Format);
        statusBar = new QStatusBar(TextEditorClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TextEditorClass->setStatusBar(statusBar);

        menuBar->addAction(menufile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuFormat->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menufile->addAction(actionNew);
        menufile->addAction(actionOpen);
        menufile->addSeparator();
        menufile->addAction(actionSave);
        menufile->addAction(actionSave_As);
        menufile->addSeparator();
        menufile->addAction(actionPrint);
        menufile->addAction(actionPrint_Preview);
        menufile->addSeparator();
        menufile->addAction(actionExit);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuFormat->addAction(menuFont->menuAction());
        menuFormat->addAction(actionColor);
        menuFont->addAction(actionBold);
        menuFont->addAction(actionItalic);
        menuFont->addAction(actionUnderline);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionAbout_Qt);
        File->addAction(actionNew);
        File->addAction(actionOpen);
        File->addAction(actionSave);
        File->addAction(actionPrint);
        Edit->addAction(actionUndo);
        Edit->addAction(actionRedo);
        Edit->addAction(actionCut);
        Edit->addAction(actionCopy);
        Edit->addAction(actionPaste);
        Format->addAction(actionBold);
        Format->addAction(actionItalic);
        Format->addAction(actionUnderline);
        Format->addAction(actionColor);

        retranslateUi(TextEditorClass);
        QObject::connect(textEdit, SIGNAL(textChanged()), TextEditorClass, SLOT(textChanged()));

        QMetaObject::connectSlotsByName(TextEditorClass);
    } // setupUi

    void retranslateUi(QMainWindow *TextEditorClass)
    {
        TextEditorClass->setWindowTitle(QApplication::translate("TextEditorClass", "TextEditor", Q_NULLPTR));
        actionNew->setText(QApplication::translate("TextEditorClass", "New", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        actionNew->setStatusTip(QApplication::translate("TextEditorClass", "Create a new file", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionNew->setShortcut(QApplication::translate("TextEditorClass", "Ctrl+N", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("TextEditorClass", "Open", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        actionOpen->setStatusTip(QApplication::translate("TextEditorClass", "Open a file", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionOpen->setShortcut(QApplication::translate("TextEditorClass", "Ctrl+O", Q_NULLPTR));
        actionSave->setText(QApplication::translate("TextEditorClass", "Save", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        actionSave->setStatusTip(QApplication::translate("TextEditorClass", "Save the file", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionSave->setShortcut(QApplication::translate("TextEditorClass", "Ctrl+S", Q_NULLPTR));
        actionSave_As->setText(QApplication::translate("TextEditorClass", "Save As...", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        actionSave_As->setStatusTip(QApplication::translate("TextEditorClass", "Save file as ...", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionSave_As->setShortcut(QApplication::translate("TextEditorClass", "Ctrl+Shift+S", Q_NULLPTR));
        actionPrint->setText(QApplication::translate("TextEditorClass", "Print", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        actionPrint->setStatusTip(QApplication::translate("TextEditorClass", "Print the file", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionPrint->setShortcut(QApplication::translate("TextEditorClass", "Ctrl+P", Q_NULLPTR));
        actionPrint_Preview->setText(QApplication::translate("TextEditorClass", "Print Preview", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        actionPrint_Preview->setStatusTip(QApplication::translate("TextEditorClass", "Preview the file ", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionExit->setText(QApplication::translate("TextEditorClass", "Exit", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        actionExit->setStatusTip(QApplication::translate("TextEditorClass", "Exit", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionExit->setShortcut(QApplication::translate("TextEditorClass", "Esc", Q_NULLPTR));
        actionUndo->setText(QApplication::translate("TextEditorClass", "Undo", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        actionUndo->setStatusTip(QApplication::translate("TextEditorClass", "Undo", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionUndo->setShortcut(QApplication::translate("TextEditorClass", "Ctrl+Z", Q_NULLPTR));
        actionRedo->setText(QApplication::translate("TextEditorClass", "Redo", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        actionRedo->setStatusTip(QApplication::translate("TextEditorClass", "Redo", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionRedo->setShortcut(QApplication::translate("TextEditorClass", "Ctrl+Y", Q_NULLPTR));
        actionCut->setText(QApplication::translate("TextEditorClass", "Cut", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        actionCut->setStatusTip(QApplication::translate("TextEditorClass", "Cut", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionCut->setShortcut(QApplication::translate("TextEditorClass", "Ctrl+C", Q_NULLPTR));
        actionCopy->setText(QApplication::translate("TextEditorClass", "Copy", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        actionCopy->setStatusTip(QApplication::translate("TextEditorClass", "Copy", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionCopy->setShortcut(QString());
        actionPaste->setText(QApplication::translate("TextEditorClass", "Paste", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        actionPaste->setStatusTip(QApplication::translate("TextEditorClass", "Paste", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionPaste->setShortcut(QApplication::translate("TextEditorClass", "Ctrl+P", Q_NULLPTR));
        actionColor->setText(QApplication::translate("TextEditorClass", "Color", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        actionColor->setStatusTip(QApplication::translate("TextEditorClass", "Color", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionBold->setText(QApplication::translate("TextEditorClass", "Bold", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        actionBold->setStatusTip(QApplication::translate("TextEditorClass", "Bold", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionBold->setShortcut(QApplication::translate("TextEditorClass", "Ctrl+B", Q_NULLPTR));
        actionItalic->setText(QApplication::translate("TextEditorClass", "Italic", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        actionItalic->setStatusTip(QApplication::translate("TextEditorClass", "Italic", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionItalic->setShortcut(QApplication::translate("TextEditorClass", "Ctrl+I", Q_NULLPTR));
        actionUnderline->setText(QApplication::translate("TextEditorClass", "Underline", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        actionUnderline->setStatusTip(QApplication::translate("TextEditorClass", "Underline", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionUnderline->setShortcut(QApplication::translate("TextEditorClass", "Ctrl+U", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("TextEditorClass", "About", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        actionAbout->setStatusTip(QApplication::translate("TextEditorClass", "About", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionAbout_Qt->setText(QApplication::translate("TextEditorClass", "About Qt", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        actionAbout_Qt->setStatusTip(QApplication::translate("TextEditorClass", "About Qt", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        menufile->setTitle(QApplication::translate("TextEditorClass", "File", Q_NULLPTR));
        menuEdit->setTitle(QApplication::translate("TextEditorClass", "Edit", Q_NULLPTR));
        menuFormat->setTitle(QApplication::translate("TextEditorClass", "Format", Q_NULLPTR));
        menuFont->setTitle(QApplication::translate("TextEditorClass", "Font", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("TextEditorClass", "Help", Q_NULLPTR));
        File->setWindowTitle(QApplication::translate("TextEditorClass", "toolBar", Q_NULLPTR));
        Edit->setWindowTitle(QApplication::translate("TextEditorClass", "toolBar_2", Q_NULLPTR));
        Format->setWindowTitle(QApplication::translate("TextEditorClass", "toolBar_3", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TextEditorClass: public Ui_TextEditorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTEDITOR_H
