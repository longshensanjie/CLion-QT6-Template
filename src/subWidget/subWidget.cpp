//
// Created by 24100 on 2022/3/26.
//

// You may need to build the project (run Qt uic code generator) to get "ui_subWidget.h" resolved

#include "subWidget.h"
#include "ui_subWidget.h"


subWidget::subWidget(QWidget *parent) :
		QWidget(parent), ui(new Ui::subWidget)
{
	ui->setupUi(this);
}

subWidget::~subWidget()
{
	delete ui;
}

