/********************************************************************************
** Form generated from reading UI file 'firstdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRSTDIALOG_H
#define UI_FIRSTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_FirstDialog
{
public:
    QTextBrowser *textBrowser;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QPlainTextEdit *plainTextEdit_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;

    void setupUi(QDialog *FirstDialog)
    {
        if (FirstDialog->objectName().isEmpty())
            FirstDialog->setObjectName(QStringLiteral("FirstDialog"));
        FirstDialog->resize(400, 300);
        textBrowser = new QTextBrowser(FirstDialog);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(30, 40, 351, 31));
        textEdit = new QTextEdit(FirstDialog);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(30, 120, 104, 71));
        textEdit_2 = new QTextEdit(FirstDialog);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(150, 120, 104, 71));
        textEdit_3 = new QTextEdit(FirstDialog);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setGeometry(QRect(270, 120, 104, 71));
        plainTextEdit_4 = new QPlainTextEdit(FirstDialog);
        plainTextEdit_4->setObjectName(QStringLiteral("plainTextEdit_4"));
        plainTextEdit_4->setGeometry(QRect(30, 80, 351, 31));
        pushButton = new QPushButton(FirstDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(290, 240, 101, 41));
        pushButton_2 = new QPushButton(FirstDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 240, 101, 41));
        radioButton = new QRadioButton(FirstDialog);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(70, 210, 82, 17));
        radioButton_2 = new QRadioButton(FirstDialog);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(190, 210, 82, 17));
        radioButton_3 = new QRadioButton(FirstDialog);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(310, 210, 82, 17));

        retranslateUi(FirstDialog);

        QMetaObject::connectSlotsByName(FirstDialog);
    } // setupUi

    void retranslateUi(QDialog *FirstDialog)
    {
        FirstDialog->setWindowTitle(QApplication::translate("FirstDialog", "Dialog", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("FirstDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Pod pytaniem zaznacz, ktora odpowiedz jest poprawna.</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("FirstDialog", "KOLEJNE PYTANIE", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("FirstDialog", "ZAPISZ PYTANIE", Q_NULLPTR));
        radioButton->setText(QString());
        radioButton_2->setText(QString());
        radioButton_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FirstDialog: public Ui_FirstDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTDIALOG_H
