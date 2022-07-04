//
// Created by htj55 on 6/29/2022.
//
/*csci262a inheritance assignment
 *
 * author: Henry Johnson
 *
 * The goal of this is to create a class that extends int_counter and is able
 * to creat a counter that adds 1 whenever increment() and stops adding when it reaches 10
 */

#ifndef INHERITANCEB_BOUNDED_COUNTER_H
#define INHERITANCEB_BOUNDED_COUNTER_H
#include "int_counter.h"
class bounded_counter : public int_counter{
private:
    int bound;
public:
    bounded_counter(unsigned int b){bound = b;}
    virtual void increment(){
        if(_value==bound){}
        else _value++;
    }
    virtual void reset(){
        _value = 0;
    }
};
#endif //INHERITANCEB_BOUNDED_COUNTER_H
