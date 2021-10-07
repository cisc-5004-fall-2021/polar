 #include <iostream>
 #include "polar.h"

using namespace std;

int main() {
    double x = 0;
    double y = 0;
    cout << "Enter x: ";
    cin >>  x;
    cout << "Enter y: ";
    cin >>  y;

    polar::rect r {x,y};

    polar::polar p=polar::rect_to_polar(r);
    polar::show_polar(p);
}