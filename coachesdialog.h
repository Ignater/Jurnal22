#ifndef COACHESDIALOG_H
#define COACHESDIALOG_H

#include <QDialog>
#include <QListWidgetItem>

namespace Ui {
class CoachesDialog;
}

class CoachesDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CoachesDialog(QWidget *parent = nullptr);
    ~CoachesDialog();

signals:
    void coachSelected(const QString &coachName);

private slots:
    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

private:
    Ui::CoachesDialog *ui;
};

#endif // COACHESDIALOG_H
