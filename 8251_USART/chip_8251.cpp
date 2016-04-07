#include "chip_8251.h"
#include<QMessageBox>
#include "ui_mainwindow.h"
//MainWindow j;

chip_8251::chip_8251()
{
}

void chip_8251::mov(QString p, QString q)
{
    if(p=="AL")
    {
        al=q;
        QMessageBox qq;
        //q.setText(checkbit);
        qq.setText(q);
        qq.exec();



    }
    else if(p=="BL")
    {   if(q=="AL")
        {
        bl=al;
        QMessageBox qz;
        //q.setText(checkbit);
        qz.setText("BL=AL :"+bl);
        qz.exec();
        }
    }
    else if(p=="CL")
    {
        cl=q;
    }
    else if(p=="DL")
    {
        dl=q;
    }
}

void chip_8251::out(QString p, QString q)
{
    if(p=="28")
    {
        if(q=="AL")
        {
          DP_B_28=al;
        }
        else if(q=="BL")
        {
          DP_B_28=bl;
        }
        else if(q=="CL")
        {
         DP_B_28=cl;
        }
        else if(q=="DL")
        {
         CW_B_29=dl;
        }

    }
    else if (p=="29")
    {
       if(q=="AL")
        {
          CW_B_29=al;
        }
        else if(q=="BL")
        {
          CW_B_29=bl;
        }
        else if(q=="CL")
        {
         CW_B_29=cl;
        }
        else if(q=="DL")
        {
         CW_B_29=dl;
        }
    }
    else if (p=="30")
    {

       if(q=="AL")
        {
          DP_A_30=al;
          //DP_B_28=al;
          DP_B_28=al;
          QMessageBox s;
          s.setText(DP_A_30);
          s.exec();
        }
        else if(q=="BL")
        {
          DP_A_30=bl;
        }
        else if(q=="CL")
        {
         DP_A_30=cl;
        }
        else if(q=="DL")
        {
         DP_A_30=dl;
        }
    }
    else if(p=="31")
    {
        if(q=="AL")
         {
           CW_A_31=al;
         }
         else if(q=="BL")
         {
           CW_A_31=bl;
         }
         else if(q=="CL")
         {
          CW_A_31=cl;
         }
         else if(q=="DL")
         {
          CW_A_31=dl;
         }
    }

}
void chip_8251::in(QString p, QString q)
{
    if(p=="AL")
    {
        if(q=="28")
        {
            al=DP_B_28;

        }
        else if (q=="29")
        {
            al=CW_B_29;
        }
        else if (q=="30")
        {
           al=DP_A_30;
        }
        else if(q=="31")
        {
            al=CW_A_31;
        }

    }
    else if(p=="BL")
    {
        if(q=="28")
        {
            bl=DP_B_28;
        }
        else if (q=="29")
        {
            bl=CW_B_29;
        }
        else if (q=="30")
        {
           bl=DP_A_30;
        }
        else if(q=="31")
        {
            bl=CW_A_31;
        }
    }
    else if(p=="CL")
    {
        if(q=="28")
        {
            cl=DP_B_28;
        }
        else if (q=="29")
        {
            cl=CW_B_29;
        }
        else if (q=="30")
        {
           cl=DP_A_30;
        }
        else if(q=="31")
        {
            cl=CW_A_31;
        }
    }
    else if(p=="DL")
    {
        if(q=="28")
        {
            dl=DP_B_28;
        }
        else if (q=="29")
        {
            dl=CW_B_29;
        }
        else if (q=="30")
        {
           dl=DP_A_30;
        }
       else if(q=="31")
        {
            dl=CW_A_31;
        }
    }

}
QString chip_8251::test(QString p, QString z)
{
    if(p=="AL")
    {
        bool ok;        
        int r=z.toInt();
        QString bitno=QString::number(1<<(r-1),2);
        int value = al.toInt(&ok,16);
        QString alvalue=QString::number(value,2);
        int one=alvalue.toInt();
        int second=bitno.toInt();
        bool res=one & second;
        QString checkbit=QString::number(res);
        QMessageBox q,y,w;
        //q.setText(alvalue);
        q.setText(QString::number(res));
        y.setText(QString::number(one));
        w.setText(QString::number(second));
        y.exec();
        w.exec();
        q.exec();
        return checkbit;

    }
    /*if(p=="BL")
    {
        bool ok;
        int r=q.toInt();
        QString bitno=QString::number(1<<(r-1),2);
        int value = bl.toInt(&ok,16);
        QString alvalue=QString::number(value,2);
        int one=alvalue.toInt();
        int second=bitno.toInt();
        bool res=one & second;
        QString checkbit=QString::number(res);

        return checkbit;

    }
    if(p=="CL")
    {
        bool ok;
        int r=q.toInt();
        QString bitno=QString::number(1<<(r-1),2);
        int value = cl.toInt(&ok,16);
        QString alvalue=QString::number(value,2);
        int one=alvalue.toInt();
        int second=bitno.toInt();
        bool res=one & second;
        QString checkbit=QString::number(res);

        return checkbit;

    }
    if(p=="DL")
    {
        bool ok;
        int r=q.toInt();
        QString bitno=QString::number(1<<(r-1),2);
        int value = dl.toInt(&ok,16);
        QString alvalue=QString::number(value,2);
        int one=alvalue.toInt();
        int second=bitno.toInt();
        bool res=one & second;
        QString checkbit=QString::number(res);

        return checkbit;

    }*/


}





















