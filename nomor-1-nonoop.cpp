#include <iostream>
using namespace std;

double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) {
    if (b != 0) return a / b;
    cout << "Error: Division by zero\n";
    return 0;
}

int main() {
    cout << add(5, 3) << endl;  // Output: 8
    return 0;
}
