#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "./PasswordManager.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


/**
 * @brief MainWindow::on_GeneratePasswordButton_clicked generates password accordingly
 */
void MainWindow::on_GeneratePasswordButton_clicked()
{
    std::string passcode = generatePassword(12, 1);
    int length = 12; // will change soon
    double entropy = checkEntropy(passcode, length);
    QString passw = QString::fromStdString(passcode);
    ui->passwordBox->setText(passw);

    QString entropyStr = QString::number(entropy);

    ui->Entropy_Display->setText(entropyStr);
}


void MainWindow::on_horizontalSlider_valueChanged(int value)
{

}

