#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "./PasswordManager.h"
#include "./passgen_settings.h"

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

int passwordLen = 0;
int option = 1;

/**
 * @brief MainWindow::on_GeneratePasswordButton_clicked generates password accordingly
 */
void MainWindow::on_GeneratePasswordButton_clicked()
{
    std::string passcode = generatePassword(passwordLen, 1);

    double entropy = checkEntropy(passcode, passwordLen);
    QString passw = QString::fromStdString(passcode);
    ui->passwordBox->setText(passw);

    QString entropyStr = QString::number(entropy);

    ui->Entropy_Display->setText(entropyStr);
}


void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    ui -> user_inputted_length->setText(QString::number(value));
    passwordLen = value;
}


void MainWindow::on_password_generation_settings_clicked()
{
    //Generate the new window
    PassGen_Settings *p = new PassGen_Settings();
    p->showNormal();

}

