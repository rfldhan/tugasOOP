#include <iostream>
using namespace std;

double calculateRectangleArea(double width, double height) {
    return width * height;
}

int main() {
    cout << calculateRectangleArea(5, 10) << endl;  // Output: 50
    return 0;
}
