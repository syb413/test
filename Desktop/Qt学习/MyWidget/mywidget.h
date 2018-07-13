#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>

namespace Ui {
class MyWIdget;
}

class MyWIdget : public QWidget
{
    Q_OBJECT

public:
    explicit MyWIdget(QWidget *parent = 0);
    ~MyWIdget();

private:
    Ui::MyWIdget *ui;
};

#endif // MYWIDGET_H
