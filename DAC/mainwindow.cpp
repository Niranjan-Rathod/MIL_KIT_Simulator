#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<instruction.h>
#include<QPainter>
#include<QPen>
#include<QMessageBox>






int i=0,s=0;
int alflag=0,decc=0,out=0;
int adc=0;
int dac=0;
float voltage;
instruction code_array[200];
unsigned long counter;
QImage image(400, 400, QImage::Format_RGB888);




MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->display_terminal->setText("select one of wave modes on right");
    ui->terminal->setFocus();
    QFont font;
    font.setCapitalization(QFont::AllUppercase);
    ui->terminal->setFont(font);
    ui->display_terminal->setFont(font);
    connect(ui->terminal,SIGNAL(returnPressed()),this,SLOT(on_ENTER_pressed())) ;
    QImage myImage;
    QString path=QCoreApplication::applicationDirPath();
    path=path+"/8255ppi.gif";
    myImage.load(path);
    ui->blockdigs->setPixmap(QPixmap::fromImage(myImage));

    ui->label->setPixmap(QPixmap::fromImage(image));
    ui->page_2->hide();
    ui->page_3->hide();
    ui->page_4->hide();
    ui->page->show();
    ui->sw->hide();
    ui->zz->hide();
    ui->stw->hide();
    ui->fw->hide();
    ui->setvoltage->hide();

}



MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::paintEvent(QPaintEvent *v)
{
    QPainter painter(&image);
    QPen pen;
    //painter.begin(&image);
    pen.setBrush(Qt::green);
    pen.setWidth(1);
    painter.setPen(pen);
}

void MainWindow::on_ENTER_pressed()
{
    QString command=ui->terminal->text().toUpper();
    ui->terminal->clear();
        QStringList list;
        list=command.split(QRegExp(",| "));
      if(list.at(0)=="E"||list.at(0)=="G"||list.at(0)=="D"||list.at(0)=="A"||list.at(0)=="MOV"||list.at(0)=="INT"
            ||list.at(0)=="OUT"||list.at(0)=="IN"||list.at(0)=="TEST"||list.at(0)=="JZ"||list.at(0)=="INC"||list.at(0)=="DEC"
                ||list.at(0)=="R"||list.at(0)=="JNZ"||list.at(0)=="JMP"||list.at(0)=="JNE")
        {

        }
        else
        {   ui->display_terminal->setTextColor(QColor ("red"));
            ui->display_terminal->append("invalid Instruction");
            ui->display_terminal->setTextColor(QColor ("white"));
          return;
        }


          instruction ob;
          ui->terminal->clear();

          if (list.at(0)=="A")
          {   bool ok;
              counter=list.at(1).toULong(&ok,16);
              ob.address=counter;
              ob.ins=command;
              code_array[i]=ob;
              ui->display_terminal->insertPlainText("PICT > ");
              ui->display_terminal->insertPlainText(code_array[i].ins);
              i++;


          }
          else if(list.at(0)=="G")
          {   bool ok;
              instruction *pointer=new instruction;
              pointer=&(code_array[0]);
              if(dac==1)
              {
                if(ui->sw->isChecked())
                {

                          QPainter painter(&image);
                          QPen pen;
                          pen.setBrush(Qt::green);
                          pen.setWidth(1);
                          painter.setPen(pen);
                          painter.drawLine(0,100,100,100);
                          painter.drawLine(100,300,200,300);
                          painter.drawLine(200,100,300,100);
                          painter.drawLine(300,300,400,300);
                          ui->label->setPixmap(QPixmap::fromImage(image));
                          ui->label->show();
                          ui->page->hide();
                          ui->page_2->show();

                    }
                else if(ui->zz->isChecked())
                {
                    QPainter painter(&image);
                    QPen pen;
                    pen.setBrush(Qt::green);
                    pen.setWidth(1);
                    painter.setPen(pen);
                    painter.drawLine(0,250,100,150);
                    painter.drawLine(100,150,200,250);
                    painter.drawLine(200,250,300,150);
                    painter.drawLine(300,150,400,250);
                    ui->label->setPixmap(QPixmap::fromImage(image));
                    ui->label->show();
                    ui->page->hide();
                    ui->page_2->show();

                }
                else if(ui->stw->isChecked())
                {
                    QPainter painter(&image);
                    QPen pen;
                    pen.setBrush(Qt::green);
                    pen.setWidth(1);
                    painter.setPen(pen);
                    painter.drawLine(0,250,50,250);
                    painter.drawLine(50,200,100,200);
                    painter.drawLine(100,150,150,150);
                    painter.drawLine(150,200,200,200);
                    painter.drawLine(200,250,250,250);
                    painter.drawLine(250,200,300,200);
                    painter.drawLine(300,150,350,150);
                    painter.drawLine(350,200,400,200);

                    ui->label->setPixmap(QPixmap::fromImage(image));
                    ui->label->show();
                    ui->page->hide();
                    ui->page_2->show();
                }
                else if(ui->fw->isChecked())
                {
                    QPainter painter(&image);
                    QPen pen;
                    pen.setBrush(Qt::green);
                    pen.setWidth(1);
                    painter.setPen(pen);
                    painter.drawLine(0,250,50,150);
                    painter.drawLine(50,250,100,150);
                    painter.drawLine(100,250,150,150);
                    painter.drawLine(150,250,200,150);
                    painter.drawLine(200,250,250,150);
                    painter.drawLine(250,250,300,150);
                    painter.drawLine(300,250,350,150);
                    painter.drawLine(350,250,400,150);

                    ui->label->setPixmap(QPixmap::fromImage(image));
                    ui->label->show();
                    ui->page->hide();
                    ui->page_2->show();


                }
              }
              else if(adc==1)
              {
                QMessageBox q;
                q.setText("Program executed successfully\nPlease check Registers");
                q.exec();
              }
          }
          else if(list.at(0)=="R")
          {   bool ok;
              QString volt=QString::number(voltage);
              QString hex=QString("%1").arg(int(voltage), 0, 16);

              ui->display_terminal->insertPlainText("\n PICT > R \nAX="+hex);
              ui->display_terminal->insertPlainText(" BX="+hex);
              ui->display_terminal->insertPlainText(" CX=0000");
              ui->display_terminal->insertPlainText(" DX=0000");
              ui->display_terminal->insertPlainText(" SP=0000");
              ui->display_terminal->insertPlainText(" BP=0000");
              ui->display_terminal->insertPlainText(" SI=0000");
              ui->display_terminal->insertPlainText(" DI=0000");
              ui->display_terminal->insertPlainText(" CS=0000");
              ui->display_terminal->insertPlainText(" DS=0000");
              ui->display_terminal->insertPlainText(" SS=0000");
              ui->display_terminal->insertPlainText(" ES=0000");
              ui->display_terminal->insertPlainText(" IP=0000");
              ui->display_terminal->insertPlainText(" FL=0000");
          }

          else
          {

          ob.address=counter;
          ob.ins=command;
          code_array[i]=ob;
          ui->display_terminal->append("0000:"+QString::number(code_array[i].address,16)+" "+code_array[i].ins);
          counter=counter+2;
          i++;
          }


}








void MainWindow::on_sw_clicked()
{
    ui->display_terminal->clear();

}

void MainWindow::on_zz_clicked()
{
  ui->display_terminal->clear();
}



void MainWindow::on_fw_clicked()
{
  ui->display_terminal->clear();
}

void MainWindow::on_dial_sliderMoved(int position)
{   float res=float(position)/float(19.8);
    QString text=QString::number(res);
    ui->lcdNumber->display(text);
    voltage=(float(res)/float(5))*float(255);

}

void MainWindow::on_DAC_clicked()
{   dac=1;
    adc=0;
    ui->sw->show();
    ui->zz->show();
    ui->stw->show();
    ui->fw->show();
    ui->setvoltage->hide();
}

void MainWindow::on_ADC_clicked()
{   adc=1;
    dac=0;
    ui->display_terminal->clear();
    ui->sw->hide();
    ui->zz->hide();
    ui->stw->hide();
    ui->fw->hide();
    ui->setvoltage->show();
}

void MainWindow::on_setvoltage_clicked()
{
    ui->page->hide();
    ui->page_2->hide();
    ui->page_3->show();
}

void MainWindow::on_ret_clicked()
{
    ui->page->show();
    ui->page_2->hide();
    ui->page_3->hide();
}

void MainWindow::on_about_clicked()
{
    ui->page->hide();
    ui->page_2->hide();
    ui->page_3->hide();
    ui->page_4->show();
}

