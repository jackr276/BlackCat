#include "shannon_entropy_info.h"
#include "ui_shannon_entropy_info.h"

Shannon_entropy_info::Shannon_entropy_info(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Shannon_entropy_info)
{
    ui->setupUi(this);
}

Shannon_entropy_info::~Shannon_entropy_info()
{
    delete ui;
}



void Shannon_entropy_info::on_Done_button_clicked()
{
    this -> close();
}

