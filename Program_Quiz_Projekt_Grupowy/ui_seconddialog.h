/********************************************************************************
** Form generated from reading UI file 'seconddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDDIALOG_H
#define UI_SECONDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_SecondDialog
{
public:
    QTextBrowser *textBrowser;
    QTextEdit *textEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *SecondDialog)
    {
        if (SecondDialog->objectName().isEmpty())
            SecondDialog->setObjectName(QStringLiteral("SecondDialog"));
        SecondDialog->resize(400, 300);
        textBrowser = new QTextBrowser(SecondDialog);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(80, 80, 256, 41));
        textEdit = new QTextEdit(SecondDialog);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(170, 160, 51, 31));
        pushButton = new QPushButton(SecondDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(280, 230, 101, 51));

        retranslateUi(SecondDialog);

        QMetaObject::connectSlotsByName(SecondDialog);
    } // setupUi

    void retranslateUi(QDialog *SecondDialog)
    {
        SecondDialog->setWindowTitle(QApplication::translate("SecondDialog", "Dialog", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("SecondDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600;\">Podaj liczbe pyta\305\204</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("SecondDialog", "Zatwierd\305\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SecondDialog: public Ui_SecondDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDDIALOG_H
