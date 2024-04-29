//
// Created by 24100 on 2022/3/26.
//

#ifndef TEMPLATE_QT_MAINWINDOW_H
#define TEMPLATE_QT_MAINWINDOW_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui
{
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = nullptr);
	~MainWindow() override;

private:
	Ui::MainWindow *ui;
};


#endif //TEMPLATE_QT_MAINWINDOW_H
