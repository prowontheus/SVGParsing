#ifndef SVGPARSING_H
#define SVGPARSING_H

#include <QWidget>
#include <QPixmap>
#include <QLabel>
#include <QPainter>
#include <QFileDialog>
#include <QSvgGenerator>
#include <QSvgRenderer>
#include <QXmlStreamWriter>
#include <QMessageBox>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <QDebug>

using std::vector;
using std::string;
using std::fstream;
using std::cout;
using std::cin;
using std::endl;

namespace Ui {
class SVGParsing;
}

class SVGParsing : public QWidget
{
    Q_OBJECT

public:
    explicit SVGParsing(QWidget *parent = 0);
    ~SVGParsing();

    void setPixmap(QPixmap* pixmap);
    void setText(QString str);
private slots:
    void on_pushButton_clicked();

private:
    Ui::SVGParsing *ui;

    QPixmap* _pixmap;
    QString _strText;
};

#endif // SVGPARSING_H
