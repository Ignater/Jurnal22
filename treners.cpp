#include "treners.h"
#include "ui_treners.h"

Treners::Treners(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Treners)
{
    ui->setupUi(this);
}

Treners::~Treners()
{
}
