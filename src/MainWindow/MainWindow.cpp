//
// Created by 24100 on 2022/3/26.
//

// You may need to build the project (run Qt uic code generator) to get "ui_MainWindow.h" resolved

#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <QDebug>
#include <QFile>
MainWindow::MainWindow(QWidget *parent) :
		QMainWindow(parent), ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	QFile file(":/img/res/test.txt");
	if(file.open(QIODevice::ReadOnly))
	{
		qDebug()<<file.readAll();
	}

}

MainWindow::~MainWindow()
{
	delete ui;
}

