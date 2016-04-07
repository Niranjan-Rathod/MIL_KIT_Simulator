#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
//Note: Simple code made complex. How? I did it without triggers first. And then added them. So, voila!

int MainWindow::inc=0;
int buffer_count=0;
bool trigger_count=false;
bool purana_trigger;
int purana_pulse=0;
bool pulse_even;
bool final_done=false;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->out_led->setStyleSheet("background-color:grey");
    ui->trig_led->setStyleSheet("background-color:grey");
    ui->textEdit->setReadOnly(true);
    ui->cw_c->setReadOnly(true);
    ui->cw_m->setReadOnly(true);
    ui->cw_cn->setReadOnly(true);
    ui->pulsecounter->setReadOnly(true);
    ui->page_2->hide();
    ui->page->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked(){
    inc++;
    int x=ui->meracounter->text().toInt();buffer_count=x;
    pulse_even=true;obj[inc].count=x;bool ok;
    uint mycom=ui->control->text().toUInt(&ok,16);
    int y=mycom;
    if (x%2==1)
        pulse_even=false;
    obj[inc].setcommand(y);
    QString Q=QString::number(obj[inc].counter)+" "+QString::number(obj[inc].length)+" "+QString::number(obj[inc].mode)+" "+QString::number(obj[inc].bcd);
    QMessageBox box, box1;
    if (ui->cwport->text().toInt()==33){
        box.setText(Q);
    }
    else {
        box.setText("Wrong Command Word Port Address!");
    }
    if (obj[inc].length!=1){
        box1.setText("Wrong command word. Just LSB mode only!");
        box1.exec();
   }
    if ((obj[inc].counter==0 && ui->counterport->text().toInt()!=30) || (obj[inc].counter==1 && ui->counterport->text().toInt()!=31)||(obj[inc].counter==2 && ui->counterport->text().toInt()!=32)){
        QMessageBox box2;
        box2.setText("Wrong Data Port Address. Counter and data port not synced.");
        box2.exec();
    }
    box.exec();

    set_textedit();
}
void MainWindow::set_textedit(){
    QString msg;
    ui->cw_c->setText(QString::number(buffer_count));
    ui->cw_m->setText(QString::number(obj[inc].mode));
    ui->cw_cn->setText(QString::number(obj[inc].counter));

    if (obj[inc].mode==0){
        msg="Mode 0: Interrupt on terminal count. Counter starts decrementing counter value after falling edge of clock. Needs one clock pulse to load the command word/count. Gate is high.";
        trigger_count=true;ui->trig_led->setStyleSheet("background-color:red");
    }
    else if (obj[inc].mode==1){
        msg="Mode 1:Programmable one-shot. The gate input is used as trigger input in this mode. Normally, the output remains high until the count is loaded and a trigger the output remains high until the count is loaded and a trigger is applied. Needs one clock pulse to load the command word/count. So, basically, count/command word is loaded when trigger is low, and the count begins when the trigger goes high.";
        ui->out_led->setStyleSheet("background-color:red");
    }
    else if (obj[inc].mode==2)   {
         msg="Mode 2: Rate Generator. If N is loaded as the count value, after N pulses, the output becomes low for one clock cycle (After N-1 clock cycles). Needs one clock pulse to load the command word/count. Gate is high.";
         trigger_count=true;ui->trig_led->setStyleSheet("background-color:red");
    }
    else if (obj[inc].mode==3){
         msg="Mode 3: Square Wave Generator. It is similar to mode 2. When, the count N loaded is EVEN, half of the count will be high and half of the count will be low. When, the count N loaded is ODD, the first clock pulse decrements it by 1. Then half of the remaining count will be high and half of the remaining count will be low.It is used to generate square waves. Needs one clock pulse to load command word.";
         trigger_count=true;ui->trig_led->setStyleSheet("background-color:red");
    }
    else if (obj[inc].mode==4){
        msg="Mode 4: Software Triggered Mode. On the terminal count, the output goes low for one clock cycle, and then again goes high. Needs one clock pulse to load the command word/count. Gate is high.";
        trigger_count=true;ui->trig_led->setStyleSheet("background-color:red");
    }
    else if (obj[inc].mode==5){
        msg="Mode 5: Hardware Triggered Mode. It is similar to mode 4 except that the counting is initiated by a signal at the gate input. Needs one clock pulse to load the command word/count. That means, the count/command word is loaded when trigger is low. And the count starts when the trigger is kept high.";
    }
    ui->textEdit->setText(msg);
}

int MainWindow::pulses=0;
void MainWindow::on_pulse_clicked(){
if (obj[inc].length==1){
    if ((obj[inc].counter==0 && ui->counterport->text().toInt()==30) || (obj[inc].counter==1 && ui->counterport->text().toInt()==31)||(obj[inc].counter==2 && ui->counterport->text().toInt()==32)){
    if (obj[inc].mode==0){//done with all test cases
        pulses++;
        ui->pulsecounter->setText(QString::number(pulses));
        if (final_done==true){
            ui->out_signal->setText("1");    ui->out_led->setStyleSheet("background-color:red");

        }
        else{
            if ((trigger_count==true) && (final_done==false)){

                if (obj[inc].count==0){
                    final_done=true;
                    ui->out_signal->setText("1");    ui->out_led->setStyleSheet("background-color:red");

                }
                else {
                    if (pulses!=1)
                        obj[inc].count--;
                    ui->out_signal->setText("0");    ui->out_led->setStyleSheet("background-color:grey");
                }

            }
            else {
                //trig is low
                pulses=0;
                //if (purana_pulse==0)
                   // obj[inc].count--;
                purana_pulse=1;
                ui->out_signal->setText("0");        ui->out_led->setStyleSheet("background-color:grey");


            }
        }
    }
    else if (obj[inc].mode==2){//done with all test cases
        pulses++;
        ui->pulsecounter->setText(QString::number(pulses));
        if (trigger_count==true){

            if (obj[inc].count!=1){
                if  (pulses==1){
                    ui->out_signal->setText("1");    ui->out_led->setStyleSheet("background-color:red");

                }

                else {
                    obj[inc].count--;
                    ui->out_signal->setText("1");    ui->out_led->setStyleSheet("background-color:red");

                }


            }
            else {
                ui->out_signal->setText("0");    ui->out_led->setStyleSheet("background-color:grey");

                obj[inc].count=buffer_count;
            }
        }
        else {
            //trigger is low
            obj[inc].count=buffer_count;
            //not changing the pulse.
        }
    }
    else if (obj[inc].mode==4){//done with all test cases
        pulses++;
        ui->pulsecounter->setText(QString::number(pulses));
        if (obj[inc].count!=0){
            if (trigger_count==true){
                if  (pulses==1){
                    ui->out_signal->setText("1");    ui->out_led->setStyleSheet("background-color:red");

                }
                else {
                    obj[inc].count--;
                    ui->out_signal->setText("1");    ui->out_led->setStyleSheet("background-color:red");

                }

            }
            else {//trig is low
                ui->out_signal->setText("1");    ui->out_led->setStyleSheet("background-color:red");


            }
        }
        else {
            ui->out_signal->setText("0");    ui->out_led->setStyleSheet("background-color:grey");

            obj[inc].count--;//so that it enters the loop above
        }
    }
    else if (obj[inc].mode==1){//Done with all test cases
//prog-1 shot{
        if (trigger_count==false){
            pulses=0; obj[inc].count=buffer_count;
            ui->out_signal->setText("1");    ui->out_led->setStyleSheet("background-color:red");

        }
        if (pulses==0){
            if (trigger_count==false){
                ui->out_signal->setText("1");    ui->out_led->setStyleSheet("background-color:red");

                pulses=1;//cw,count loaded
            }
            else {

            }
        }
        if (pulses==1){
            if (trigger_count==true){
                ui->out_signal->setText("0");    ui->out_led->setStyleSheet("background-color:grey");

                obj[inc].count--;
                pulses++;
            }

        }
        else {
             if (trigger_count==true){
               if(obj[inc].count==0){
                    ui->out_signal->setText("1");    ui->out_led->setStyleSheet("background-color:red");

                }

                else if (obj[inc].count<buffer_count && obj[inc].count>0){
                    obj[inc].count--;
                    ui->out_signal->setText("0");    ui->out_led->setStyleSheet("background-color:grey");

                }
                else {ui->out_signal->setText("1");    ui->out_led->setStyleSheet("background-color:red");}

                pulses++;

        }
             ui->pulsecounter->setText(QString::number(pulses));
        }
    }
    else if (obj[inc].mode==3){//Done with all test cases
        if (trigger_count==false){
            pulses=0;
            obj[inc].count=buffer_count;
        }
        if (pulses==0 && trigger_count==false){
            ui->out_signal->setText("1");ui->out_led->setStyleSheet("background-color:red");
        }
        else if (pulses==0 && trigger_count==true){
            ui->out_signal->setText("1");ui->out_led->setStyleSheet("background-color:red");
            pulses++;
        }
        else if (obj[inc].count==1){
            ui->out_signal->setText("0");    ui->out_led->setStyleSheet("background-color:grey");

            obj[inc].count=buffer_count;
            pulses++;
        }
        else {

                if (obj[inc].count>(buffer_count/2)){
                    ui->out_signal->setText("1");ui->out_led->setStyleSheet("background-color:red");
                }
                else {
                    ui->out_signal->setText("0");    ui->out_led->setStyleSheet("background-color:grey");

                }
                obj[inc].count--;
                pulses++;
            }


    }
    else if (obj[inc].mode==5){//Done with all test cases
        if (trigger_count==false){
            pulses=0;
            obj[inc].count=buffer_count;
        }
        if (pulses==0){//output remains high at the beginning. When Trigger goes low, count, cw is loaded. Now the pulse is 1.
            if (trigger_count==false){
                ui->out_signal->setText("1");ui->out_led->setStyleSheet("background-color:red");
                pulses=1;//loaded
            }
        }
       else if (pulses==1){
            if (trigger_count==true){//Pulse is incremented only when, trig=true. else, it waits.
                obj[inc].count--;
                pulses++;
            }
            ui->out_signal->setText("1");ui->out_led->setStyleSheet("background-color:red");
        }
        else {
             if (trigger_count==true){

                 if(obj[inc].count==0){
                    ui->out_signal->setText("0");ui->out_led->setStyleSheet("background-color:grey");
                    obj[inc].count--;//why'--'? So, that next time this func is called, it executes the bottom most else.

                }

                else if (obj[inc].count<buffer_count && obj[inc].count>0){
                    obj[inc].count--;
                    ui->out_signal->setText("1");ui->out_led->setStyleSheet("background-color:red");
                }
                else {ui->out_signal->setText("1");ui->out_led->setStyleSheet("background-color:red");}
                pulses++;

        }
 /*           else if (trigger_count==false){
                //now, thoda tricky. We dont know when the trigger is pressed.
                 //So, when it goes low, we store purana_pulse and Purana_trigger.
                 //And just reset this entire code.
                 //but op remains high at this entire time
                 ui->out_signal->setText("1");
                 pulses=0;
                 obj[inc].count=buffer_count;
             }
*/
             ui->pulsecounter->setText(QString::number(pulses));
        }
    }
    }
    else {
        QMessageBox box2;
        box2.setText("Wrong Data Port Address. Counter and data port not synced.");
        box2.exec();
    }
}
}


void MainWindow::on_trigger_clicked(){
    if (trigger_count==false){
        trigger_count=true;
        ui->trigger_signal->setText("1");    ui->trig_led->setStyleSheet("background-color:red");

    }
    else{
        ui->trigger_signal->setText("0");    ui->trig_led->setStyleSheet("background-color:grey");

        trigger_count=false;
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->page->hide();
    ui->page_2->show();
}
