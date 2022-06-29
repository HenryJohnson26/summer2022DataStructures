//
// Created by htj55 on 6/27/2022.
//
/*CSCI 262A clocktime_2
 *
 * author: Henry Johnson
 *
 * the goal of this class is to create headers and instance data in order add and adjust
 * time with wrapping, as well as headers for the to_string and convert methods.
 * it will also be used to overide the << operator
 */

#ifndef CLOCKTIME_CLOCK_TIME_H
#define CLOCKTIME_CLOCK_TIME_H
#include <iostream>
using namespace std;
class clock_time{
    friend ostream & operator<<(ostream & out, clock_time c);
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
void set_time(int h, int m, int s);
string pad_number(int number);
string to_string(clock_time c);
string to_string(string time);
clock_time convert(string time);
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
ostream & operator<<(ostream & out, clock_time c){
    out<<c.to_string(c);
    return out;
}
#endif //CLOCKTIME_CLOCK_TIME_H
