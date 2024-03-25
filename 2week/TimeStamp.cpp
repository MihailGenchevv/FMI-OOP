//
// Created by MGenchev on 26.03.24.
//

#include "TimeStamp.h"
#include <iostream>
using namespace std;


void TimeStamp::getTimeStampFormatted(int seconds){
    string ans;
    hours = seconds / 3600;
    min = seconds % 3600 / 60;
    sec = seconds % 60;

    cout << hours << ":" << min << ":" << sec;
}

int TimeStamp::calculateSeconds(TimeStamp timeStamp){
    int seconds = 0;
    seconds += this->min*60;
    seconds += this->hours * 3600;
    seconds += this->sec;

    seconds += timeStamp.sec;
    seconds += timeStamp.hours * 3600;
    seconds += timeStamp.min * 60;
    return seconds;
}



