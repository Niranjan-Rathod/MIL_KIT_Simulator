#ifndef INSTRUCTION_H
#define INSTRUCTION_H
#include<QString>
#include <mainwindow.h>
class instruction
{
    QString ins;
    unsigned long address;
public:
    instruction();
    friend class MainWindow;
};

#endif // INSTRUCTION_H
