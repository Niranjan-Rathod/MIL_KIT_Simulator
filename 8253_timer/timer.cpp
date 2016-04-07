#include "timer.h"

Timer::Timer()
{
    length=mode=bcd=counter=count=0;
}
void Timer::setcommand(int x){
    if (x>=128){
        counter=2;
        x-=128;
    }
    if (x>=64){
        counter+=1;
        x-=64;
    }
    if (x>=32){
        length=2;
        x-=32;
    }
    if (x>=16){
        length+=1;
        x-=16;
    }
    if (x>=8){
        mode=4;
        x-=8;
    }
    if (x>=4){
        mode+=2;
        x-=4;
    }
    if (x>=2){
        mode+=1;
        x-=2;
    }
    if (x==1){
        bcd=1;
    }


}

