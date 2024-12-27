#include "labelaxisdialog.h"
#include "ui_labelaxisdialog.h"

labelAxisDialog::labelAxisDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::labelAxisDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Add Data To Plot");
}

labelAxisDialog::~labelAxisDialog()
{
    delete ui;
}

void labelAxisDialog::on_buttonBox_accepted()
{

}


void labelAxisDialog::on_buttonBox_rejected()
{

}

