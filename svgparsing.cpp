#include "svgparsing.h"
#include "ui_svgparsing.h"

SVGParsing::SVGParsing(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SVGParsing)
{
    ui->setupUi(this);
}

SVGParsing::~SVGParsing()
{
    delete ui;
}

void SVGParsing::on_pushButton_clicked()
{
//    QXmlStreamReader qsr;
    QString filePath = QFileDialog::getOpenFileName(0, "打开文件", ".", "SVG(*.svg)");
    if(filePath.isNull())
        return;

    FILE *fd = fopen(filePath.toStdString().c_str(),"r");
    if(nullptr == fd)
    {
        QMessageBox::StandardButton qmb = QMessageBox::information(this, "提示","打不开文", QMessageBox::Ok);
        return;
    }
    char buf[1024];
    memset(buf,0,1024);
    int count = fread(buf,1,sizeof(buf),fd);
    char *pos = nullptr;
    long long ret = 0;
    int i = 0;
    while(count > 0)
    {
        pos = strstr(buf,"<text x=");
        if(pos == nullptr)
        {
            count = fread(buf,1,sizeof(buf),fd);
            ret += count;
        }
        else
        {
            qDebug() << "ret=" << ret;
//            printf("ret=%lld\n",ret);
        }
        i++;
    }
    fwrite(buf,strlen(buf),1,fd);

//    fstream file(filePath.toStdString());
//    vector<string> words;
//    string line;
//    int pos = 0;
//    while (getline(file,line))
//    {
//        pos = line.find("<desc>");
//        if(string::npos != pos)
//        {
//            words.push_back(line);
//        }
//    }

//    QFile file(filePath);
    QSvgRenderer* svgRender = new QSvgRenderer();
    svgRender->load(filePath);
    QPixmap* pixmap = new QPixmap(1024,512);
    pixmap->fill(Qt::transparent);//设置背景透明
    QPainter p(pixmap);
    svgRender->render(&p);

    ui->labelSvg->setPixmap(*pixmap);
    setText(QStringLiteral("红色闪闪的五角星"));
}

void SVGParsing::setPixmap(QPixmap* pixmap) {
    _pixmap = pixmap;
    ui->labelSvg->setPixmap(*pixmap);
}

void SVGParsing::setText(QString str) {
    _strText = str;
}
