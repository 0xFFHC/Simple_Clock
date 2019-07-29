#include <unistd.h>
#include "clock.hpp"



void clockClass::setTime(int hours, int minutes, int seconds) {
    
    if (hours >= 0 && hours < 24 ){
        this->hours = hours;
    }
    if (minutes >= 0 && minutes < 60){
        this->minutes = minutes;
    }
    if (seconds >= 0 && seconds < 60){
        this->seconds = seconds;
    }
    
}
void clockClass::printTime() const{
    std::cout << hours << ":" << minutes << ":" << seconds << std::endl;
 
}
void clockClass::startTime(){
    
        seconds++;
        sleep(1);
        if (seconds == 60){
            seconds = 0;
            minutes++;
            if (minutes == 60){
                minutes = 0;
                hours++;
                if (hours == 24){
                    hours = 0;
                }
            }
        }
};
