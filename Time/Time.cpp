//
// Created by ahmed on 11/2/2018.
//

#include "Time.h"

Time :: Time(int h, int m,string d)
{
    this->hour = h;
    this->minute = m;
    this->dayNight = d;
}

int Time ::getH()
{
    return  hour;
}

int Time ::getM()
{
    return  minute;
}

string Time ::getD()
{
    return dayNight;
}

void Time ::print()
{
    cout << getH() << ":" << getM() << " " << getD() << "\n";
}

Time ::~Time()
{
    // dto.
}