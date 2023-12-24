// coachinfodialog.cpp

#include "coachinfodialog.h"
#include "ui_coachinfodialog.h"  // Убедитесь, что этот инклуд присутствует

CoachInfoDialog::CoachInfoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CoachInfoDialog)
{
    ui->setupUi(this);
}

CoachInfoDialog::~CoachInfoDialog()
{
    delete ui;
}

void CoachInfoDialog::setCoachInfo(const QString &coachName)
{
    // Пример установки информации о тренере
    ui->labelName->setText(coachName);
    // Добавьте аналогичные строки для других QLabel с информацией о тренере
}
