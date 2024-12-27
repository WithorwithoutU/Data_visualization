/********************************************************************************
** Form generated from reading UI file 'labelaxisdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LABELAXISDIALOG_H
#define UI_LABELAXISDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_labelAxisDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *textEdit;
    QLabel *label_3;
    QTextEdit *textEdit_3;
    QLabel *label_2;
    QTextEdit *textEdit_2;
    QLabel *label_4;
    QTextEdit *textEdit_4;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *labelAxisDialog)
    {
        if (labelAxisDialog->objectName().isEmpty())
            labelAxisDialog->setObjectName("labelAxisDialog");
        labelAxisDialog->resize(536, 522);
        verticalLayout = new QVBoxLayout(labelAxisDialog);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(labelAxisDialog);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        textEdit = new QTextEdit(labelAxisDialog);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);

        label_3 = new QLabel(labelAxisDialog);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        textEdit_3 = new QTextEdit(labelAxisDialog);
        textEdit_3->setObjectName("textEdit_3");

        verticalLayout->addWidget(textEdit_3);

        label_2 = new QLabel(labelAxisDialog);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        textEdit_2 = new QTextEdit(labelAxisDialog);
        textEdit_2->setObjectName("textEdit_2");

        verticalLayout->addWidget(textEdit_2);

        label_4 = new QLabel(labelAxisDialog);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        textEdit_4 = new QTextEdit(labelAxisDialog);
        textEdit_4->setObjectName("textEdit_4");

        verticalLayout->addWidget(textEdit_4);

        buttonBox = new QDialogButtonBox(labelAxisDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(labelAxisDialog);

        QMetaObject::connectSlotsByName(labelAxisDialog);
    } // setupUi

    void retranslateUi(QDialog *labelAxisDialog)
    {
        labelAxisDialog->setWindowTitle(QCoreApplication::translate("labelAxisDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("labelAxisDialog", "Label X axis\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("labelAxisDialog", "X axis scale (left empty as origin)\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("labelAxisDialog", "Label Y axis:", nullptr));
        label_4->setText(QCoreApplication::translate("labelAxisDialog", "Y axis scale (left empty as origin):", nullptr));
    } // retranslateUi

};

namespace Ui {
    class labelAxisDialog: public Ui_labelAxisDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LABELAXISDIALOG_H
