#include "AboutBox.h"

AboutBox::AboutBox(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	setWindowTitle("About");
}

AboutBox::~AboutBox()
{
}
