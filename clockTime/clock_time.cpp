//
// Created by htj55 on 6/27/2022.
//
/*CSCI 206A clocktime
 *
 * Author: Henry Johnson
 *
 * The goal of this file is to create the methods used by the clock_time class
 * so that it can add and adjust time with wraparounds
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
