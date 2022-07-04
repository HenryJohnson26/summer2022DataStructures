//
// Created by htj55 on 6/27/2022.
//
/*CSCI 262A clocktime_2
 *
 * author: Henry Johnson
 *
 * the goal of this class is to create headers and instance data in order add and adjust
 * time with wrapping, as well as headers for the to_string and convert methods.
 * it will also initialize and friend the operator ovveriders
 * extra credit completed
 */

#ifndef CLOCKTIME_CLOCK_TIME_H
#define CLOCKTIME_CLOCK_TIME_H
#include <iostream>
#include <sstream>
#include <ctime>
using namespace std;
class clock_time{
    friend ostream& operator<<(ostream& out, const clock_time& c);
    friend string to_string(const clock_time& c);
    friend string to_string(clock_time& c, bool twelveHour);
    friend bool operator==(const clock_time& first, const clock_time& second);
    friend bool operator!=(const clock_time& first, const clock_time& second);
    friend clock_time operator+(const clock_time& first, const clock_time& second);
    //Data to be used by the clock_time class privated so to not be accesible by main
private:
    int hour;
    int minute;
    int second;

public:
//methods to be used in main
int get_hour();
int get_minute();
int get_second();
int set_twelve(int h);

void set_time(int h, int m, int s);
void set_now();

string pad_number(int number) const;

//string to_string(clock_time& c);
//ostream& operator<<(ostream& out, clock_time& c);
//constructors of the clock_time class
clock_time(){
        set_time(0,0,0);
}
clock_time(int h, int m, int s){
    set_time(h,m,s);
}
//destructor of the clock_time class
~clock_time() {}



};


#endif //CLOCKTIME_CLOCK_TIME_H
