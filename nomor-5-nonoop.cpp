#include <iostream>
#include <cmath>
using namespace std;

double distanceFromOrigin(double x, double y) {
    return sqrt(x * x + y * y);
}

int main() {
    cout << distanceFromOrigin(3, 4) << endl;  // Output: 5.0
    return 0;
}
