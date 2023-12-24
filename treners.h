#ifndef TRENERS_H
#define TRENERS_H

#include <QDialog>

namespace Ui {
class Treners;
}

class Treners : public QDialog
{
    Q_OBJECT

public:
    explicit Treners(QWidget *parent = nullptr);
    ~Treners();

private:
    Ui::Treners *ui;
};

#endif // TRENERS_H
