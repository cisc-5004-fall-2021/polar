#include <iostream>
#include <cmath>
#include "polar.h"

using namespace std;

namespace polar {
    polar rect_to_polar(rect rectangle) {
        polar result;

        result.distance = sqrt(
            rectangle.x*rectangle.x + rectangle.y*rectangle.y
        );
        result.angle=atan2(rectangle.y, rectangle.x);

        return result;
    }

    void show_polar(polar p) {
        cout << "Distance: " << p.distance;
        cout << " angle: " << p.angle * RAD_DEGREE << endl;
    }
}