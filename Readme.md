## TextEdit实现文档

### 项目介绍

本项目在Virtual Studio 2015中实现了一个类似Windows系统中的记事本程序，使用VS中的QT Virtual Studio Tools工具在VS中调用Qt的库函数，以通过Qt实现这样一个记事本。

### 代码结构

#### 整体架构

TextEdit首先通过Qt Designer完成记事本界面的设计，再利用信号和槽函数将记事本中的Action和特定函数相连，当点击记事本按键时，触发槽函数，再完成特定的操作，以此完成记事本的所有功能。

TextEdit类图如下图所示：

![](https://github.com/xzjqx/TextEdit/tree/master/images/TextEdit_UML.jpg)

#### UI设计

通过Qt Designer完成计算器UI的设计，在Qt Designer中，extEdit使用了菜单栏，工具栏和QTextEdit。

#### 信号和槽函数

TextEdit用到的信号只有Action的triggered()信号和QTextEdit的textChanged()信号，triggered()信号是Action触发时发出的，每一个Action对应一个槽函数，对QTextEdit进行特定操作：

```C++
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
```

textChanged()信号是QTextEdit的内容变化时触发的，TextEdit使用一个bool型变量isSaved保存当前打开文件的状态，textChanged()信号触发时，调用槽函数void textChanged()将isSaved信号置为false：

```C++
void TextEditor::textChanged() {
    isSaved = false;
}
```

actionAbout_Qt触发的信号调用Qt自带的aboutQt()槽函数。

### 具体实现

#### 文件的操作和实现

TextEdit有两个全局变量，isSaved已经介绍过了，还有一个fileName，用于保存当前正在处理的文件名字（包含文件路径）。

##### 新建和打开

新建文件比较简单，TextEdit的处理方式是先判断当前处理的文件是否已经保存，若未保存则先弹出是否保存的提示框，之后将编辑区域QTextEdit清空，重新设置程序标题。

打开文件用到Qt自带的QFileDialog，这是一个Windows文件选择框类，调用其中的getOpenFileName成员函数即可返回当前要打开的文件的文件名（包含文件路径）。之后使用QFile类在fileName的基础上声明文件类型，由于需要打开带格式的文本文件，TextEdit使用QTextEdit的setHtml函数，。

##### 保存和另存为

保存和另存为的主体代码类似，需要将富文本保存到文件中，TextEdit用到QTextDocumentWriter进行文件的写操作，写文件的主体代码只有如下两句：

```C++
QTextDocumentWriter writer(fileName);
writer.write(ui.textEdit->document());
```

##### 打印和打印预览

打印功能的实现用到Qt的Print Support，需要在VS2015的Qt VS Tools中勾上这个模块，具体位置在Qt VS Tools->Qt Project Settings->Qt Modules，勾上Print Support后点击OK即可。

打印和打印预览分别使用QtPrintSupport和QPrintPreviewDialog类。

#### **格式操作的实现** 

格式的操作分为改变文本字体和改变文本颜色，TextEdit使用QTextCharFormat类设置字体，其中字体格式通过Action的isChecked信号判断是否需要设置，字体颜色通过QColorDialog选取。

#### About界面设计

TextEdit希望弹出一个非QMessageBox类型的About界面，故在项目内新建了一个Qt GUI Class，简单UI设计。

### 效果展示



