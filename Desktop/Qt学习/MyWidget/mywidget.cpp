#include "mywidget.h"
#include "ui_mywidget.h"

MyWIdget::MyWIdget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWIdget)
{
    ui->setupUi(this);
}

MyWIdget::~MyWIdget()
{
    delete ui;
}
