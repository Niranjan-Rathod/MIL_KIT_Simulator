#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <chip_8251.h>
#include<instruction.h>

chip_8251 obj;
unsigned long counter;
unsigned long counters;
int i=0,s=0;
instruction code_array[200];
instruction source_data[20];
instruction des_data[20];
int butc=0;
int dataa;
int source=0;
int des=0;
QString previous_return="-1";


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
     ui->setupUi(this);
     ui->display_terminal->setText("select one of Radio Buttons On right Side\n1]Byte Transfer or\n2]Block Transfer.");
     ui->display2->setText("Note that data is\nalways displayed\nfrom LSB to MSB\n and in exam LEDs\nwill display 1-0 at\nstart and then\n data of transfered byte");
     ui->terminal->setFocus();
     ui->soursebut->hide();
     ui->desbut->hide();
     QFont font;
     font.setCapitalization(QFont::AllUppercase);
     ui->terminal->setFont(font);
     ui->terminal_2->setFont(font);
     QImage myImage;
     QImage myImage2;
     QString path=QCoreApplication::applicationDirPath();
     QString pathb=QCoreApplication::applicationDirPath();
     pathb=pathb+"/block.png";
     path=path+"/dyna8251.jpg";
     myImage.load(path);
     myImage2.load(pathb);
     ui->blockdig->setPixmap(QPixmap::fromImage(myImage2));
     ui->image->setPixmap(QPixmap::fromImage(myImage));
     ui->display_terminal->setFont(font);
     ui->display_terminal_2->setFont(font);
     connect(ui->terminal,SIGNAL(returnPressed()),this,SLOT(on_ENTER_pressed())) ;
     connect(ui->terminal_2,SIGNAL(returnPressed()),this,SLOT(on_ENTER_pressed())) ;
     connect(ui->about,SIGNAL(clicked()),this,SLOT(on_about_clicked()));
     ui->page_2->hide();
     ui->page_3->hide();
     ui->page_4->hide();
     ui->page->show();
     ui->display_terminal->setTextColor(QColor ("white"));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_ENTER_pressed()
{
    if(source==1)
    {
      source_terminal();
    }
    else
    {
        QString command=ui->terminal->text().toUpper();
        QStringList list;
        list=command.split(QRegExp(",| "));
        if(list.at(0)=="E"||list.at(0)=="G"||list.at(0)=="D"||list.at(0)=="A"||list.at(0)=="MOV"||list.at(0)=="INT"
            ||list.at(0)=="OUT"||list.at(0)=="IN"||list.at(0)=="TEST"||list.at(0)=="JZ"||list.at(0)=="INC"||list.at(0)=="DEC"
                ||list.at(0)=="JNZ"||list.at(0)=="JMP"||list.at(0)=="E"||list.at(0)=="AND")
        {

        }
        else
        {   ui->display_terminal->setTextColor(QColor ("red"));
            ui->display_terminal->append("invalid Instruction");
            ui->display_terminal->setTextColor(QColor ("white"));
          return;
        }

        if(ui->bytetra->isChecked())
        {
                    QString command=ui->terminal->text().toUpper();
                    instruction ob;
                    ui->terminal->clear();
                    QStringList list;
                    list=command.split(QRegExp(",| "));
                    if (list.at(0)=="A")
                    {   bool ok;
                        counter=list.at(1).toULong(&ok,16);
                        ob.address=NULL;
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

                            while(true)
                            {
                             unsigned long retval=instruction_fetch(pointer->address);
                             if(retval==0)
                             {
                                 pointer++;
                                 continue;
                             }
                             else if(retval==-1)
                             {   if(obj.al==obj.bl && obj.al!=0)
                                 {
                                    ui->status->setText("Program Executed Successfully.");
                                    ui->status->append("press Hardware mode");
                                 }
                                 break;
                             }
                             else
                             {
                                 /*for(int j=0;j<i;j++)
                                 {
                                    if(code_array[j].address==retval)
                                     {
                                         pointer=&(code_array[j]);
                                         continue;
                                     }
                                 }*/

                             }

                            }
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
    else if(ui->blocktra->isChecked())
    {
        ui->soursebut->show();
        ui->desbut->show();
        QString command=ui->terminal->text().toUpper();
        instruction ob;
        ui->terminal->clear();
        QStringList list;
        list=command.split(QRegExp(",| "));
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

            for(int d=1;d<s;d++)
            {
                des_data[d].ins=source_data[d].ins;
            }
            on_desbut_clicked();
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
    }
}

void MainWindow::source_terminal()
{

        QString command=ui->terminal_2->text().toUpper();
        QStringList list;
        list=command.split(QRegExp(",| "));
         instruction ob;
      ui->terminal_2->clear();

      list=command.split(QRegExp(",| "));
      if (list.at(0)=="E")
      {   bool ok;
          counters=list.at(1).toULong(&ok,16);
          ob.address=counters++;
          ob.ins=command;
          source_data[s]=ob;
          ui->display_terminal_2->append("0000:"+QString::number(source_data[s].address,16)+" "+source_data[s].ins);
          s++;
      }
      else if(list.at(0)=="D")
      {   ui->display_terminal_2->clear();
          ui->display_terminal_2->append("0000:"+QString::number(source_data[0].address,16));
          for(int d=1;d<s;d++)
          {
              ui->display_terminal_2->insertPlainText(source_data[d].ins);
              ui->display_terminal_2->insertPlainText(" ");

          }
      }
      else
      {
          ob.address=counters++;
          ob.ins=command;
          source_data[s]=ob;
          ui->display_terminal_2->append("0000:"+QString::number(source_data[s].address,16)+" "+source_data[s].ins);
          s++;

      }

}

unsigned long MainWindow::instruction_fetch(unsigned long addr)
{   for(int j=0;j<i;j++)
    {
        if (code_array[j].address==addr)
        {   ui->cwa->setText(obj.CW_A_31);
            ui->dpa->setText(obj.DP_A_30);
            ui->cwb->setText(obj.CW_B_29);
            ui->dpb->setText(obj.DP_B_28);
            ui->al->setText(obj.al);
            ui->bl->setText(obj.bl);
            ui->cl->setText(obj.cl);
            ui->dl->setText(obj.dl);
            QStringList list;
            list=code_array[j].ins.split(QRegExp(",| "));
            if(list.at(0)=="A")
            {
                return 0;
            }
            if(list.at(0)=="MOV")
            {
                if(list.at(1)=="AL"||list.at(1)=="BL"||list.at(1)=="CL"||list.at(1)=="DL")
                {   obj.mov(list.at(1),list.at(2));
                }
                return 0;
            }
            else if(list.at(0)=="OUT")
            {
                obj.out(list.at(1),list.at(2));
                return 0;
            }
            else if(list.at(0)=="IN")
            {
               return 0;
            }
            else if(list.at(0)=="TEST")
            {   return 0;

            }
            else if(list.at(0)=="INT")
            {
               return -1;
            }
            else if(list.at(0)=="JZ")
            {
                return 0;
                /*if(previous_return=="0")
                {
                    return list.at(1).toULong(&ok,16);

                }
                else
                {
                    return 0;
                }*/

            }
            else
            {
                return 0;
            }


        }
    }



}

void MainWindow::on_pushButton_clicked()
{
    //butc++;
    ui->page->hide();
    ui->page_2->show();

}

void MainWindow::on_pushButton_2_clicked()
{
    bool ok;
    //butc++;
    if(butc==0)
    {
     dataa=obj.bl.toInt(&ok,16);
    butc++;
    }
    int check=dataa%2;
    dataa=dataa/2;
    //QString bin=QString::number(data,2);


    if(check==1)
    {
    ui->led1->setStyleSheet("background-color:red");
    ui->led1_2->setStyleSheet("background-color:red");
    }
    else
    {
        ui->led1->setStyleSheet("background-color:grey");
        ui->led1_2->setStyleSheet("background-color:grey");
    }
}

void MainWindow::on_bytetra_clicked()
{
    ui->display_terminal->clear();
}

void MainWindow::on_blocktra_clicked()
{   ui->soursebut->show();
    ui->desbut->show();
    ui->display_terminal->clear();
}

void MainWindow::on_soursebut_clicked()
{
    ui->page->hide();
    ui->page_2->hide();
    ui->page_3->show();
    ui->terminal_2->setFocus();
    source=1;
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->page_3->hide();
    ui->page_2->hide();
    ui->page->show();
    source=0;
}

void MainWindow::on_desbut_clicked()
{   ui->page->hide();
    ui->page_2->hide();
    ui->page_3->show();
    ui->label_10->hide();
    ui->display_terminal_2->clear();
    ui->display_terminal_2->insertPlainText("Containts of Destination \naddress are\n");
    for(int d=1;d<=s;d++)
    {
    ui->display_terminal_2->insertPlainText(des_data[d].ins);
    ui->display_terminal_2->insertPlainText(" ");

    }
}

void MainWindow::on_about_clicked()
{
    ui->page->hide();
    ui->page_2->hide();
    ui->page_3->hide();
    ui->page_4->show();
}
