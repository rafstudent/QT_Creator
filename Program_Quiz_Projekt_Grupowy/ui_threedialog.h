/********************************************************************************
** Form generated from reading UI file 'threedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THREEDIALOG_H
#define UI_THREEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_threeDialog
{
public:
    QTextBrowser *textBrowser;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QTextBrowser *textBrowser_2;
    QPushButton *pushButton_4;
    QTextBrowser *textBrowser_3;
    QTextBrowser *textBrowser_4;
    QTextBrowser *textBrowser_5;
    QTextBrowser *textBrowser_6;

    void setupUi(QDialog *threeDialog)
    {
        if (threeDialog->objectName().isEmpty())
            threeDialog->setObjectName(QStringLiteral("threeDialog"));
        threeDialog->resize(400, 300);
        textBrowser = new QTextBrowser(threeDialog);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(100, 30, 221, 91));
        pushButton = new QPushButton(threeDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 150, 101, 51));
        pushButton_2 = new QPushButton(threeDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(170, 150, 101, 51));
        pushButton_3 = new QPushButton(threeDialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(300, 150, 91, 51));
        textBrowser_2 = new QTextBrowser(threeDialog);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(40, 220, 341, 41));
        pushButton_4 = new QPushButton(threeDialog);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(294, 270, 91, 23));
        textBrowser_3 = new QTextBrowser(threeDialog);
        textBrowser_3->setObjectName(QStringLiteral("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(30, 70, 51, 31));
        textBrowser_4 = new QTextBrowser(threeDialog);
        textBrowser_4->setObjectName(QStringLiteral("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(340, 70, 51, 31));
        textBrowser_5 = new QTextBrowser(threeDialog);
        textBrowser_5->setObjectName(QStringLiteral("textBrowser_5"));
        textBrowser_5->setGeometry(QRect(30, 10, 51, 51));
        textBrowser_6 = new QTextBrowser(threeDialog);
        textBrowser_6->setObjectName(QStringLiteral("textBrowser_6"));
        textBrowser_6->setGeometry(QRect(340, 10, 51, 51));
        textBrowser_2->raise();
        textBrowser->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        textBrowser_3->raise();
        textBrowser_4->raise();
        textBrowser_5->raise();
        textBrowser_6->raise();

        retranslateUi(threeDialog);

        QMetaObject::connectSlotsByName(threeDialog);
    } // setupUi

    void retranslateUi(QDialog *threeDialog)
    {
        threeDialog->setWindowTitle(QApplication::translate("threeDialog", "Dialog", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("threeDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Gdy b\304\231dziesz gotowy kliknij przycisk &quot;Kolejne pytanie&quot;.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Tutaj zobaczysz kolejne pytania.</p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("threeDialog", "Odpowied\305\272 A", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("threeDialog", "Odpowied\305\272 B", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("threeDialog", "Odpowied\305\272 C", Q_NULLPTR));
        textBrowser_2->setHtml(QApplication::translate("threeDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Tutaj dowiesz si\304\231 czy odpowiedzia\305\202e\305\233 poprawnie. Pytanie testowe nie posiada poprawnej odpowiedzi.</p></body></html>", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("threeDialog", "Kolejne pytanie", Q_NULLPTR));
        textBrowser_3->setHtml(QApplication::translate("threeDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        textBrowser_5->setHtml(QApplication::translate("threeDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Liczba dobrych</p></body></html>", Q_NULLPTR));
        textBrowser_6->setHtml(QApplication::translate("threeDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Liczba z\305\202ych</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class threeDialog: public Ui_threeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THREEDIALOG_H
