#ifndef CONNECTDLG_H
#define CONNECTDLG_H

#include <QDialog>

namespace Ui {
class ConnectDLG;
}

class ConnectDLG : public QDialog
{
    Q_OBJECT

public:
    explicit ConnectDLG(QWidget *parent = 0);
    ~ConnectDLG();
    QString getLogin();
    QString getPass();

private:
    Ui::ConnectDLG *ui;
};

#endif // CONNECTDLG_H
