//
// Created by ahmed on 11/2/2018.
//

#ifndef TIME_TIME_H
#define TIME_TIME_H

#include <iostream>
using  namespace std;

class Time {
protected:
    int hour;
    int minute;
    string dayNight;
public:

    Time(int h, int m,string d);
    int getH();
    int getM();
    string getD();
    void print();
    ~Time();
};


#endif //TIME_TIME_H
