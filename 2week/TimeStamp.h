//
// Created by MGenchev on 26.03.24.
//

#ifndef FMI_OOP_TIMESTAMP_H
#define FMI_OOP_TIMESTAMP_H


class TimeStamp {
public:
    int hours;
    int min;
    int sec;
    void getTimeStampFormatted(int seconds);
    int calculateSeconds(TimeStamp timeStamp);

};


#endif //FMI_OOP_TIMESTAMP_H
