#include <iostream>
#include "clock.hpp"

int main()
{
    
    clockClass myClock;
    myClock.setTime(9, 45, 5);
    
    while(true){
        
    myClock.startTime();
    myClock.printTime();
    }
    
    return 0;
}
