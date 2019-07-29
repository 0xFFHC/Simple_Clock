#ifndef clock_hpp
#define clock_hpp

#include <stdio.h>
#include <iostream>

class clockClass
{
public:
    void setTime(int, int, int);
    void getTime(int&, int&, int&) const;
    void printTime() const;
    void startTime();
private:
    int hours;
    int minutes;
    int seconds;
    
};

#endif 
