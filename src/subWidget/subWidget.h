//
// Created by 24100 on 2022/3/26.
//

#ifndef TEMPLATE_QT_SUBWIDGET_H
#define TEMPLATE_QT_SUBWIDGET_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui
{
class subWidget;
}
QT_END_NAMESPACE

class subWidget : public QWidget
{
Q_OBJECT

public:
	explicit subWidget(QWidget *parent = nullptr);
	~subWidget() override;

private:
	Ui::subWidget *ui;
};


#endif //TEMPLATE_QT_SUBWIDGET_H
