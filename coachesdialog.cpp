#include "coachesdialog.h"
#include "ui_coachesdialog.h"
#include <QListWidgetItem>

CoachesDialog::CoachesDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CoachesDialog)
{
    ui->setupUi(this);
    // Заполните список тренеров
}

CoachesDialog::~CoachesDialog()
{
    delete ui;
}

void CoachesDialog::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    emit coachSelected(item->text());
    accept();  // Закрыть окно тренеров после выбора тренера
}
