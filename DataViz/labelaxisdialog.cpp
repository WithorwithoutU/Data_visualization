#include "labelaxisdialog.h"
#include "ui_labelaxisdialog.h"

labelAxisDialog::labelAxisDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::labelAxisDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Label axis and scale");

    ui->textEdit->setText("x");
    ui->textEdit_2->setText("y");
}

labelAxisDialog::~labelAxisDialog()
{
    delete ui;
}

void labelAxisDialog::on_buttonBox_accepted()
{

    labelAxisDialog::close();
}


void labelAxisDialog::on_buttonBox_rejected()
{
    labelAxisDialog::close();
}

