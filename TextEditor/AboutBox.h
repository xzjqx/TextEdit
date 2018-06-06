#pragma once

#include <QWidget>
#include "ui_AboutBox.h"

class AboutBox : public QWidget
{
	Q_OBJECT

public:
	AboutBox(QWidget *parent = Q_NULLPTR);
	~AboutBox();

private:
	Ui::AboutBox ui;
};
