#ifndef LABELAXISDIALOG_H
#define LABELAXISDIALOG_H

#include <QDialog>

namespace Ui {
class labelAxisDialog;
}

class labelAxisDialog : public QDialog
{
    Q_OBJECT

public:
    explicit labelAxisDialog(QWidget *parent = nullptr);
    ~labelAxisDialog();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::labelAxisDialog *ui;
};

#endif // LABELAXISDIALOG_H
