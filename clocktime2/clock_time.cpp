//
// Created by htj55 on 6/27/2022.
//
/*CSCI 206A clocktime_2
 *
 * Author: Henry Johnson
 *
 * The goal of this file is to create the methods used by the clock_time class
 * so that it can add and adjust time with wraparounds as well as methods for
 * for the to_string and operation ovverides
 * extra credit completed
 */
#include "clock_time.h"
#include <iostream>
int clock_time::get_hour() {
    return hour;
}
int clock_time::get_minute() {
    return minute;
}
int clock_time::get_second() {
    return second;
}
int clock_time::set_twelve(int h){
    if(h>12)h-=12;
    return h;
}


void clock_time::set_time(int h, int m, int s) {
    //multiplying to get total seconds
    second = (h*60*60)+(m*60)+(s);
    //accounting for underflow
    while(second<0)second+=(24*60*60);
    //getting hours and minutes from seconds while accounting for overflow
    hour = (second/60/60)%24;
    minute = (second/60)%60;
    second = second%60;
}
void clock_time::set_now() {
    time_t clock1;
    struct tm * timeinfo;
    time (&clock1);
    timeinfo = localtime (&clock1);
    set_time(timeinfo->tm_hour,timeinfo->tm_min,timeinfo->tm_sec);
    cout<<"current time set to time set to: "<<timeinfo->tm_hour<<":"<<timeinfo->tm_min<<":"<<timeinfo->tm_sec<<endl;
}


string clock_time::pad_number(int number) const {
    string out;
    if(number<10) out= "0" + std::to_string(number);
    else out = std::to_string(number);
    return out;
}
string to_string(const clock_time& c) {
    string min = c.pad_number(c.minute);
    string sec = c.pad_number(c.second);
    string hour = std::to_string(c.hour);
    return hour+":"+min+":"+sec;
}
string to_string(clock_time& c, const bool twelveHour){
    string min = c.pad_number(c.minute);
    string sec = c.pad_number(c.second);
    int hour = c.set_twelve(c.hour);
    return to_string(hour)+":"+min+":"+sec;
}


ostream& operator<<(ostream& out, const clock_time& c){
    out<<to_string(c);
    return out;
}
bool operator==(const clock_time& first, const clock_time& second){
    return first.hour == second.hour && first.minute == second.minute && first.second == second.second;
}
bool operator!=(const clock_time& first, const clock_time& second){
    return !(first == second);
}
clock_time operator+(const clock_time& first, const clock_time& second){
    clock_time out;
    out.set_time(first.hour + second.hour,
                 first.minute + second.minute,
                 first.second + second.second);
    return out;
}
