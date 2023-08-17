#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton, &QAbstractButton::clicked, this, [this](){
        ++num_presses;
        const auto text = QString("Button was pressed %1 time(s).").arg(num_presses);
        ui->label->setText(text);
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

