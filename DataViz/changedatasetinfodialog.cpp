#include "changedatasetinfodialog.h"
#include "ui_changedatasetinfodialog.h"

ChangeDataSetInfoDialog::ChangeDataSetInfoDialog(QWidget *parent, const QString &description, const QString &name) :
    QDialog(parent),
    ui(new Ui::ChangeDataSetInfoDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Change Dataset Information");
    this->setWindowIcon(QIcon(":/icons/edit.svg"));

    ui->textEdit->setPlainText(description);
    ui->lineEdit->setText(name);
    connect(this, SIGNAL(sendNewDataSetName_SIGNAL(QString*)), parent, SLOT(receiveNewDataSetName(QString*)));
    connect(this, SIGNAL(sendNewDataSetDescription_SIGNAL(QString*)), parent, SLOT(receiveNewDataSetDescription(QString*)));
}

ChangeDataSetInfoDialog::~ChangeDataSetInfoDialog()
{
    delete ui;
}

void ChangeDataSetInfoDialog::on_buttonBox_accepted()
{
    try {
        QString* newName = new QString(ui->lineEdit->text());
        QString* description = new QString(ui->textEdit->toPlainText());
        if(!newName->isEmpty() || !description->isEmpty()){
            emit sendNewDataSetName_SIGNAL(newName);
            emit sendNewDataSetDescription_SIGNAL(description);
        } else throw 2;
    }
    catch(int errCode)
    {
        displayErrorDialog(errCode);
    }

    ChangeDataSetInfoDialog::close();
}

void ChangeDataSetInfoDialog::on_buttonBox_rejected()
{
    ChangeDataSetInfoDialog::close();
}

void ChangeDataSetInfoDialog::displayErrorDialog(int errCode)
{
    ErrorDialog* Error_dlg=new ErrorDialog(errCode, this);
    Error_dlg->exec();
    delete Error_dlg;
}
