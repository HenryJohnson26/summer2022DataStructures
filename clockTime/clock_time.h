//
// Created by htj55 on 6/27/2022.
//
/*CSCI 262A clocktime
 *
 * author: Henry Johnson
 *
 * the goal of this class is to create headers and instance data in order add and adjust
 * time with wrapping
 */

#ifndef CLOCKTIME_CLOCK_TIME_H
#define CLOCKTIME_CLOCK_TIME_H
class clock_time{
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
