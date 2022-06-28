#include <iostream>
#include "rectangle.h"
int main() {
    rectangle r1(1,5);
    rectangle r2(5,1);
    cout<<"r1: "<<r1;
    cout<<"r2: "<<r2;
    rectangle r3 = r1*r2;
    cout<<"r3: "<<r3;
    return 0;
}
