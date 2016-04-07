#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<instruction.h>
#include<unistd.h>
#include<QtTest/QTest>



unsigned long counter;
unsigned long counterd;
int i=0,s=0;
instruction code_array[200];
QString Word_array[8];
instruction ob;
int delay=0;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit->hide();
    ui->lineEdit->setMaxLength(1);
    ui->enter->hide();
    ui->label->hide();
    ui->terminal->setFocus();
    QFont font;
    QImage myImage;
    QString path=QCoreApplication::applicationDirPath();
    path=path+"/8279.png";
    myImage.load(path);
    ui->blockdig->setPixmap(QPixmap::fromImage(myImage));
    font.setCapitalization(QFont::AllUppercase);
    ui->terminal->setFont(font);
    ui->display_terminal->setFont(font);
    ui->terminal_2->setFont(font);
    ui->lineEdit->setFont(font);
    ui->display_terminal_2->setFont(font);
    connect(ui->terminal,SIGNAL(returnPressed()),this,SLOT(on_ENTER_pressed())) ;
    connect(ui->terminal_2,SIGNAL(returnPressed()),this,SLOT(on_ENTER_pressed())) ;
    ui->page_2->hide();
    ui->page_3->hide();
    ui->page_4->hide();
    ui->page->show();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::delay_terminal()
{
    QString command=ui->terminal_2->text().toUpper();
    ui->terminal_2->clear();
            QStringList list;
            list=command.split(QRegExp(",| "));
          if(list.at(0)=="E"||list.at(0)=="G"||list.at(0)=="D"||list.at(0)=="A"||list.at(0)=="MOV"||list.at(0)=="INT"
                ||list.at(0)=="OUT"||list.at(0)=="IN"||list.at(0)=="TEST"||list.at(0)=="JZ"||list.at(0)=="INC"||list.at(0)=="DEC"
                    ||list.at(0)=="CALL"||list.at(0)=="JNZ"||list.at(0)=="JMP"||list.at(0)=="CMP"||list.at(0)=="RET"||list.at(0)=="AND")
            {

            }
            else
            {   ui->display_terminal_2->setTextColor(QColor ("red"));
                ui->display_terminal_2->append("invalid Instruction");
                ui->display_terminal_2->setTextColor(QColor ("white"));
              return;
            }
          if (list.at(0)=="A")
          {   bool ok;
              counterd=list.at(1).toULong(&ok,16);
              ob.address=NULL;
              ob.ins=command;
              ui->display_terminal_2->insertPlainText("PICT > ");
              ui->display_terminal_2->insertPlainText(command);

          }
          else
          {
          ob.address=counterd;
          ob.ins=command;
          ui->display_terminal_2->append("0000:"+QString::number(counterd,16)+" "+command);
          counterd=counterd+2;

          }
}

void MainWindow::on_ENTER_pressed()
{

    if(delay==1)
    {
        delay_terminal();
    }
    else
    {   QString command=ui->terminal->text().toUpper();
        ui->terminal->clear();
        QStringList list;
        list=command.split(QRegExp(",| "));
      if(list.at(0)=="E"||list.at(0)=="G"||list.at(0)=="D"||list.at(0)=="A"||list.at(0)=="MOV"||list.at(0)=="INT"
            ||list.at(0)=="OUT"||list.at(0)=="IN"||list.at(0)=="TEST"||list.at(0)=="JZ"||list.at(0)=="INC"||list.at(0)=="DEC"
                ||list.at(0)=="CALL"||list.at(0)=="JNZ"||list.at(0)=="JMP"||list.at(0)=="CMP"||list.at(0)=="RET")
        {

        }
        else
        {   ui->display_terminal->setTextColor(QColor ("red"));
            ui->display_terminal->append("invalid Instruction");
            ui->display_terminal->setTextColor(QColor ("white"));
          return;
        }
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
          if(ui->Re->isChecked())
          {
            ui->page->hide();
            ui->page_2->show();

            ui->lcdNumber1->display(Word_array[0]);
            go_to_Sleep();
            ui->lcdNumber2->display(Word_array[0]);
            ui->lcdNumber1->display(Word_array[1]);
            go_to_Sleep();
            ui->lcdNumber3->display(Word_array[0]);
            ui->lcdNumber2->display(Word_array[1]);
            ui->lcdNumber1->display(Word_array[2]);
            go_to_Sleep();
            ui->lcdNumber4->display(Word_array[0]);
            ui->lcdNumber3->display(Word_array[1]);
            ui->lcdNumber2->display(Word_array[2]);
            ui->lcdNumber1->display(Word_array[3]);
            go_to_Sleep();
            ui->lcdNumber5->display(Word_array[0]);
            ui->lcdNumber4->display(Word_array[1]);
            ui->lcdNumber3->display(Word_array[2]);
            ui->lcdNumber2->display(Word_array[3]);
            ui->lcdNumber1->display(Word_array[4]);
             go_to_Sleep();
             ui->lcdNumber6->display(Word_array[0]);
             ui->lcdNumber5->display(Word_array[1]);
             ui->lcdNumber4->display(Word_array[2]);
             ui->lcdNumber3->display(Word_array[3]);
             ui->lcdNumber2->display(Word_array[4]);
             ui->lcdNumber1->display(Word_array[5]);
             go_to_Sleep();
             ui->lcdNumber7->display(Word_array[0]);
             ui->lcdNumber6->display(Word_array[1]);
             ui->lcdNumber5->display(Word_array[2]);
             ui->lcdNumber4->display(Word_array[3]);
             ui->lcdNumber3->display(Word_array[4]);
             ui->lcdNumber2->display(Word_array[5]);
             ui->lcdNumber1->display(Word_array[6]);
             go_to_Sleep();
             ui->lcdNumber8->display(Word_array[0]);
             ui->lcdNumber7->display(Word_array[1]);
             ui->lcdNumber6->display(Word_array[2]);
             ui->lcdNumber5->display(Word_array[3]);
             ui->lcdNumber4->display(Word_array[4]);
             ui->lcdNumber3->display(Word_array[5]);
             ui->lcdNumber2->display(Word_array[6]);
             ui->lcdNumber1->display(Word_array[7]);

          }
          else if ((ui->Le->isChecked()))
          { ui->page->hide();
              ui->page_2->show();
              ui->lcdNumber8->display(Word_array[0]);
              go_to_Sleep();
              ui->lcdNumber8->display(Word_array[0]);
              ui->lcdNumber7->display(Word_array[1]);
              go_to_Sleep();
              ui->lcdNumber8->display(Word_array[0]);
              ui->lcdNumber7->display(Word_array[1]);
              ui->lcdNumber6->display(Word_array[2]);
              go_to_Sleep();
              ui->lcdNumber8->display(Word_array[0]);
              ui->lcdNumber7->display(Word_array[1]);
              ui->lcdNumber6->display(Word_array[2]);
              ui->lcdNumber5->display(Word_array[3]);
              go_to_Sleep();
              ui->lcdNumber8->display(Word_array[0]);
              ui->lcdNumber7->display(Word_array[1]);
              ui->lcdNumber6->display(Word_array[2]);
              ui->lcdNumber5->display(Word_array[3]);
              ui->lcdNumber4->display(Word_array[4]);
               go_to_Sleep();
               ui->lcdNumber8->display(Word_array[0]);
               ui->lcdNumber7->display(Word_array[1]);
               ui->lcdNumber6->display(Word_array[2]);
               ui->lcdNumber5->display(Word_array[3]);
               ui->lcdNumber4->display(Word_array[4]);
               ui->lcdNumber3->display(Word_array[5]);
               go_to_Sleep();
               ui->lcdNumber8->display(Word_array[0]);
               ui->lcdNumber7->display(Word_array[1]);
               ui->lcdNumber6->display(Word_array[2]);
               ui->lcdNumber5->display(Word_array[3]);
               ui->lcdNumber4->display(Word_array[4]);
               ui->lcdNumber3->display(Word_array[5]);
               ui->lcdNumber2->display(Word_array[6]);
               go_to_Sleep();
               ui->lcdNumber8->display(Word_array[0]);
               ui->lcdNumber7->display(Word_array[1]);
               ui->lcdNumber6->display(Word_array[2]);
               ui->lcdNumber5->display(Word_array[3]);
               ui->lcdNumber4->display(Word_array[4]);
               ui->lcdNumber3->display(Word_array[5]);
               ui->lcdNumber2->display(Word_array[6]);
               ui->lcdNumber1->display(Word_array[7]);
          }
          else if(ui->Roll->isChecked())
          {ui->page->hide();
              ui->page_2->show();
              while(true)
              {
              ui->lcdNumber1->display(Word_array[0]);
              go_to_Sleep();
              ui->lcdNumber2->display(Word_array[0]);
              ui->lcdNumber1->display(Word_array[1]);
              go_to_Sleep();
              ui->lcdNumber3->display(Word_array[0]);
              ui->lcdNumber2->display(Word_array[1]);
              ui->lcdNumber1->display(Word_array[2]);
              go_to_Sleep();
              ui->lcdNumber4->display(Word_array[0]);
              ui->lcdNumber3->display(Word_array[1]);
              ui->lcdNumber2->display(Word_array[2]);
              ui->lcdNumber1->display(Word_array[3]);
              go_to_Sleep();
              ui->lcdNumber5->display(Word_array[0]);
              ui->lcdNumber4->display(Word_array[1]);
              ui->lcdNumber3->display(Word_array[2]);
              ui->lcdNumber2->display(Word_array[3]);
              ui->lcdNumber1->display(Word_array[4]);
               go_to_Sleep();
               ui->lcdNumber6->display(Word_array[0]);
               ui->lcdNumber5->display(Word_array[1]);
               ui->lcdNumber4->display(Word_array[2]);
               ui->lcdNumber3->display(Word_array[3]);
               ui->lcdNumber2->display(Word_array[4]);
               ui->lcdNumber1->display(Word_array[5]);
               go_to_Sleep();
               ui->lcdNumber7->display(Word_array[0]);
               ui->lcdNumber6->display(Word_array[1]);
               ui->lcdNumber5->display(Word_array[2]);
               ui->lcdNumber4->display(Word_array[3]);
               ui->lcdNumber3->display(Word_array[4]);
               ui->lcdNumber2->display(Word_array[5]);
               ui->lcdNumber1->display(Word_array[6]);
               go_to_Sleep();
               ui->lcdNumber8->display(Word_array[0]);
               ui->lcdNumber7->display(Word_array[1]);
               ui->lcdNumber6->display(Word_array[2]);
               ui->lcdNumber5->display(Word_array[3]);
               ui->lcdNumber4->display(Word_array[4]);
               ui->lcdNumber3->display(Word_array[5]);
               ui->lcdNumber2->display(Word_array[6]);
               ui->lcdNumber1->display(Word_array[7]);
              }
          }
              else if(ui->Flash->isChecked())
              {
                  ui->page->hide();
                  ui->page_2->show();
                  while(true)
                  {
                      ui->lcdNumber8->display(Word_array[0]);
                      ui->lcdNumber7->display(Word_array[1]);
                      ui->lcdNumber6->display(Word_array[2]);
                      ui->lcdNumber5->display(Word_array[3]);
                      ui->lcdNumber4->display(Word_array[4]);
                      ui->lcdNumber3->display(Word_array[5]);
                      ui->lcdNumber2->display(Word_array[6]);
                      ui->lcdNumber1->display(Word_array[7]);
                      go_to_Sleep();
                      ui->lcdNumber8->display("");
                      ui->lcdNumber7->display("");
                      ui->lcdNumber6->display("");
                      ui->lcdNumber5->display("");
                      ui->lcdNumber4->display("");
                      ui->lcdNumber3->display("");
                      ui->lcdNumber2->display("");
                      ui->lcdNumber1->display("");
                      go_to_Sleep();

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
}

void MainWindow::on_Enterdata_clicked()
{
    ui->lineEdit->show();
    ui->enter->show();
    ui->label->setText("Enter 8 charecters of\nword to display\nOne by one\n*Note that not every \nNumber \ncan be shown on LCD\n Data is stored\non addrress 2000");
    ui->label->show();

}

void MainWindow::on_enter_clicked()
{
    if(s<8)
    {
    QString letter=ui->lineEdit->text().toUpper();
    if (letter=="I")
    {
        letter="1";
    }
    Word_array[s]=letter;
    s++;
    ui->lineEdit->clear();
    ui->lineEdit->setFocus();
    }
    else
    {
        ui->label->setText("You already entered 8\nLetters.");
    }
}

void MainWindow::go_to_Sleep()
{
    QTest::qWait(1000);
}

void MainWindow::on_return_2_clicked()
{
    ui->page_2->hide();
    ui->page->show();
}

void MainWindow::on_about_clicked()
{
    ui->page->hide();
    ui->page_2->hide();
    ui->page_3->show();
}

void MainWindow::on_wdr_clicked()
{
    ui->page->hide();
    ui->page_2->hide();
    ui->page_3->hide();
    ui->page_4->show();
    delay=1;
    ui->terminal_2->setFocus();
}

void MainWindow::on_return_3_clicked()
{
    ui->page_4->hide();
    ui->page_2->hide();
    ui->page_3->hide();
    ui->page->show();
    delay=0;
}
