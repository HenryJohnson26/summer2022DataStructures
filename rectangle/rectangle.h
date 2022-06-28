//
// Created by htj55 on 6/28/2022.
//

#ifndef RECTANGLE_RECTANGLE_H
#define RECTANGLE_RECTANGLE_H
#include <iostream>
using namespace std;
class rectangle{
    friend ostream& operator<<(ostream&out, const rectangle&r);
private:
    double length;
    double width;
public:
    double getLength(){
        return length;
    }

    rectangle(double l, double w){
        length = l;
        width = w;
    }
    rectangle operator*(rectangle&r){
        rectangle returned(this->length*r.length,this->width*r.width);
        return returned;
    }
};
ostream& operator<<(ostream&out, const rectangle&r){
    out<<"length: "<<r.length<<" width: "<< r.width<<endl;
    return out;
}
#endif //RECTANGLE_RECTANGLE_H
