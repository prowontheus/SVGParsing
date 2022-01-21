/********************************************************************************
** Form generated from reading UI file 'svgparsing.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SVGPARSING_H
#define UI_SVGPARSING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SVGParsing
{
public:
    QLabel *labelSvg;
    QPushButton *pushButton;

    void setupUi(QWidget *SVGParsing)
    {
        if (SVGParsing->objectName().isEmpty())
            SVGParsing->setObjectName(QStringLiteral("SVGParsing"));
        SVGParsing->resize(1100, 800);
        labelSvg = new QLabel(SVGParsing);
        labelSvg->setObjectName(QStringLiteral("labelSvg"));
        labelSvg->setGeometry(QRect(26, 26, 1024, 512));
        pushButton = new QPushButton(SVGParsing);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 550, 99, 27));

        retranslateUi(SVGParsing);

        QMetaObject::connectSlotsByName(SVGParsing);
    } // setupUi

    void retranslateUi(QWidget *SVGParsing)
    {
        SVGParsing->setWindowTitle(QApplication::translate("SVGParsing", "SVGParsing", 0));
        labelSvg->setText(QString());
        pushButton->setText(QApplication::translate("SVGParsing", "OPEN", 0));
    } // retranslateUi

};

namespace Ui {
    class SVGParsing: public Ui_SVGParsing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SVGPARSING_H
