//
//  Clock.hpp
//  A Million Clocks
//
//  Created by Cameron Erdogan on 9/9/16.
//
//

#ifndef Clock_hpp
#define Clock_hpp

#include <stdio.h>
#include <math.h>  
#include "ofMain.h"


class Clock
{
public:
    Clock(float centerX, float centerY);
    Clock(float centerX, float centerY, bool shouldDrawHourHand);
    void setTime(float m, float h);
    void setTime(float m);
    void incrementByMinutes(float m);
    void incrementByHours(float h);
    void draw();
    float getMinute();
    float getHour();
private:
    double minutesToRadians(float minutes);
    double hoursToRadians(float hours);
    float minute, hour;
    float radius;
    float x, y;
    bool drawHourHand;
    
};


#endif /* Clock_hpp */

