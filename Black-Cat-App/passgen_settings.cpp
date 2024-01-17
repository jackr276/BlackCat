#include "passgen_settings.h"
#include "ui_passgen_settings.h"

PassGen_Settings::PassGen_Settings(QWidget *parent, int option)
    : QDialog(parent)
    , ui(new Ui::PassGen_Settings)
{
    ui->setupUi(this);
    ui->MDG_Select->setChecked(option == 0);
    ui->LCG_Select->setChecked(option == 1);

}


PassGen_Settings::~PassGen_Settings()
{
    delete ui;
}



void PassGen_Settings::on_Accept_button_clicked()
{
    this->close();
}



void PassGen_Settings::on_LCG_Select_toggled(bool checked)
{
    //send out a signal with the LCG option
    emit optionChanged(1);
}


void PassGen_Settings::on_MDG_Select_toggled(bool checked)
{
    //send out a signal with the mdg option
    emit optionChanged(0);
}



void PassGen_Settings::on_Cancel_Button_clicked()
{
    this->close();

}
