#ifndef CHIP_8251_H
#define CHIP_8251_H
#include<QString>
#include"mainwindow.h"

class chip_8251
{
   QString al="0",bl="0",cl,dl;
   QString CW_A_31;
   QString CW_B_29;
   QString DP_A_30;
   QString DP_B_28;
   int d0,d1,d2,d3,d4,d5,d6,d7;
   int c_OR_d_bar;
   int rd_bar;
   int cs_bar;
   int clk;
   int reset;
   int trans_clock_bar;
   int trans_data;
   int res_clock_bar;
   int res_data;
   int res_ready;
   int trans_ready;
   int ds_ready_bar;
   int dt_ready_bar;
   int sync_detect;
   int brkdet;
   int rts_bar;
   int cts_bar;
   int trans_empty;
public:
    chip_8251();
    void instruction_fetch();
    void mov(QString,QString);
    void out(QString,QString);
    void in (QString,QString);
    QString test(QString,QString);
    void intt(int);
    void inc(QString);
    void dec(QString);
    void jz(QString);
    void jnz(int);
    friend class MainWindow;
};

#endif // CHIP_8251_H
