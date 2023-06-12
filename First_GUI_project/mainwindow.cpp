#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    int click = 0;
    connect(ui->pushButton, &QPushButton::clicked, this, [this, click]() mutable
    {
        on_pushButton_clicked(++click);
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked(int click)
{
    std::string click_str = std::to_string(click);
    std::string text_str = "You have clicked the button ";
    std::string times_str = " times";
    const QString& qstr = QString::fromStdString(text_str + click_str + times_str);
    ui->labelButton->setText(qstr);
}
