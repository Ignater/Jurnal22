#ifndef COACHINFODIALOG_H
#define COACHINFODIALOG_H

#include <QDialog>

namespace Ui {
class CoachInfoDialog;
}

class CoachInfoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CoachInfoDialog(QWidget *parent = nullptr);
    ~CoachInfoDialog();

    void setCoachInfo(const QString &coachName);

private:
    Ui::CoachInfoDialog *ui;
};

#endif // COACHINFODIALOG_H
