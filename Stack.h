//
// Created by htj55 on 7/12/2022.
//

#ifndef STACK_STACK_H
#define STACK_STACK_H
#include <vector>
using namespace std;
class Stack {
public:
    Stack();

    void push(char c);
    char top();
    void pop();
    int size();
    bool is_empty();

private:
    vector<char> _stack;
    int _top;
    int _size;
};


#endif //STACK_STACK_H
