#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlDatabase>
#include "connectdlg.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :QMainWindow(parent),ui(new Ui::MainWindow){
    ui->setupUi(this);
    connect(ui->OkBT, SIGNAL(clicked()), this, SLOT(connectDB()));
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::connectDB(){
    ConnectDLG *dlg;
    dlg = new ConnectDLG(this);
    if(dlg->exec()){
        QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("localhost");
        db.setDatabaseName("hello");
        db.setUserName(dlg->getLogin());
        db.setPassword(dlg->getPass());
        if (db.open()){
            ui->HelloLB->setText("Conexao estabelecida");
        }
    }
}
