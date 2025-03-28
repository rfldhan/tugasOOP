#include <iostream>
using namespace std;

class Rectangle {
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() { return width * height; }
};

int main() {
    Rectangle rect(5, 10);
    cout << rect.area() << endl;  // Output: 50
    return 0;
}
