//
// Created by htj55 on 7/12/2022.
//

#include "Stack.h"
Stack::Stack(){
    _top = 0;
    _size = 0;
}

void Stack::push(char c){
    //add char c to underlying vector
    _stack.push_back(c);
    _size ++;
    _top = _size - 1;
}
char Stack::top(){
    //return char at the top of vector
    return _stack.at(_top);
}
void Stack::pop(){
    //remove top item
    _stack.pop_back();
    _size --;
    _top = _size -1;
}
int Stack::size(){
    return _size;
}
bool Stack::is_empty(){
    return _size == 0;
}