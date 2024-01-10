#include "passgen_settings.h"
#include "ui_passgen_settings.h"

PassGen_Settings::PassGen_Settings(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PassGen_Settings)
{
    ui->setupUi(this);
}

PassGen_Settings::~PassGen_Settings()
{
    delete ui;
}

void PassGen_Settings::on_pushButton_clicked()
{

}

