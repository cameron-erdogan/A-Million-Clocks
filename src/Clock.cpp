//
//  Clock.cpp
//  A Million Clocks
//
//  Created by Cameron Erdogan on 9/9/16.
//
//

#include "Clock.hpp"


Clock::Clock(float centerX, float centerY){
    x = centerX;
    y = centerY;
    minute = 20;
    hour = 12;
    radius = 45;
    drawHourHand = false;
}

Clock::Clock(float centerX, float centerY, bool shouldDrawHourHand){
    x = centerX;
    y = centerY;
    minute = 20;
    hour = 12;
    radius = 45;
    drawHourHand = shouldDrawHourHand;
}

float Clock::getHour(){
    return hour;
}

float Clock::getMinute(){
    return minute;
}

void Clock::draw(){
    
    //draw circular frame of clock
    ofSetColor(255, 255, 255);
    ofDrawCircle(x, y, radius);
    
    //draw clock hands
    //minute hand
    ofSetColor(0, 0, 0);
    ofSetLineWidth(4);
    
    double mAngle = minutesToRadians(minute);
    ofDrawLine(x, y, x + 0.9 * radius * cos(mAngle), y - 0.9 * radius * sin(mAngle));
    
    //hour hand
    if(drawHourHand == true){
        ofSetLineWidth(5);
        double hAngle = hoursToRadians(hour);
        ofDrawLine(x, y, x + 0.5 * radius * cos(hAngle), y - 0.5 * radius * sin(hAngle));
    }
}


// :::: NOTE :::
// for the sake of my sanity, the times of 12:00 - 12:59
// are numerically replaced by 0:00 - 0:59


// only sets the minute hand, ignores hour hand
void Clock::setTime(float m){
    minute = m;
    if(minute > 60.0) minute -= 60.0;
}


//this method is for manually setting the minute and hour hands
void Clock::setTime(float m, float h){
    minute = m;
    if(minute > 60.0) minute -= 60.0;
    
    hour = h;
    if(hour > 12.0) hour -= 12.0;
}


void Clock::incrementByMinutes(float m){
    minute += m;
    if(minute > 60.0) minute -= 60.0;
}

void Clock::incrementByHours(float h){
    hour += h;
    if(hour > 12.0) hour -= 12.0;
}

// converts the minute hand's position on the clock to radians
// for example, when the minute hand is showing 15 minutes (pointed at 3 all the way to the right)
// this will return 0 radians. 30 minutes returns -pi/2 radians. And so on.
double Clock::minutesToRadians(float minutes){
    
    //value in degrees:
    double angle = -6.0 * minutes + 90.0;
    //to radians
    angle = angle * PI / 180.0;
    
    return angle;
}

// same deal as above, but with hours
double Clock::hoursToRadians(float hours){
    //value in degrees:
    double angle = -30.0 * hours + 90.0;
    //to radians
    angle = angle * PI / 180.0;
    
    return angle;
}

