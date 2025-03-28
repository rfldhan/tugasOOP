#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
    double x, y;

public:
    Point(double xVal, double yVal) : x(xVal), y(yVal) {}

    double distanceFromOrigin() {
        return sqrt(x * x + y * y);
    }
};

int main() {
    Point p(3, 4);
    cout << p.distanceFromOrigin() << endl;  // Output: 5.0
    return 0;
}
