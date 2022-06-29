//
// Created by htj55 on 6/27/2022.
//
/*CSCI 206A clocktime_2
 *
 * Author: Henry Johnson
 *
 * The goal of this file is to create the methods used by the clock_time class
 * so that it can add and adjust time with wraparounds as well as methods for
 * for the to_string and convert methods
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
string clock_time::pad_number(int number) {
    string out;
    if(number<10) out= "0" + std::to_string(number);
    else out = std::to_string(number);
    return out;
}
string clock_time::to_string(clock_time c) {
    string min = c.pad_number(c.minute);
    string sec = c.pad_number(c.second);
    string hour = std::to_string(c.hour);
    return hour+":"+min+":"+sec;
}
clock_time clock_time::convert(string time) {

}
string clock_time::to_string(string time) {
    convert(time);
}
