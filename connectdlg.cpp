#include "connectdlg.h"
#include "ui_connectdlg.h"

ConnectDLG::ConnectDLG(QWidget *parent) :QDialog(parent),ui(new Ui::ConnectDLG){
    ui->setupUi(this);
}

ConnectDLG::~ConnectDLG(){
    delete ui;
}

QString ConnectDLG::getLogin(){
    return ui->loginLE->text();
}

QString ConnectDLG::getPass(){
    return ui->passLE->text();
}
