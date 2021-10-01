/********************************************************************************
** Form generated from reading UI file 'fourthdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOURTHDIALOG_H
#define UI_FOURTHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_fourthdialog
{
public:
    QTextBrowser *textBrowser;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTextBrowser *textBrowser_2;

    void setupUi(QDialog *fourthdialog)
    {
        if (fourthdialog->objectName().isEmpty())
            fourthdialog->setObjectName(QStringLiteral("fourthdialog"));
        fourthdialog->resize(400, 300);
        textBrowser = new QTextBrowser(fourthdialog);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(60, 40, 301, 61));
        pushButton = new QPushButton(fourthdialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(90, 130, 91, 51));
        pushButton_2 = new QPushButton(fourthdialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(210, 130, 91, 51));
        textBrowser_2 = new QTextBrowser(fourthdialog);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(80, 200, 256, 61));

        retranslateUi(fourthdialog);

        QMetaObject::connectSlotsByName(fourthdialog);
    } // setupUi

    void retranslateUi(QDialog *fourthdialog)
    {
        fourthdialog->setWindowTitle(QApplication::translate("fourthdialog", "Dialog", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("fourthdialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:600;\">Za chwile rozpoczniesz test, czy jeste\305\233 gotowy?</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("fourthdialog", "Tak", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("fourthdialog", "Nie", Q_NULLPTR));
        textBrowser_2->setHtml(QApplication::translate("fourthdialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Uwaga, prosz\304\231 o nie wybieranie odpowiedzi w pierwszym okienku zawieraj\304\205cym instrukcj\304\231.</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class fourthdialog: public Ui_fourthdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOURTHDIALOG_H
