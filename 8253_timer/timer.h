#ifndef TIMER_H
#define TIMER_H


class Timer
{
public:
    int counter,length,mode,bcd;
    int count;
    Timer();
    void setcommand(int x);
    friend class MainWindow;
};

#endif // TIMER_H
