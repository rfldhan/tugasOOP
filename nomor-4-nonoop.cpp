#include <iostream>
using namespace std;

int counter = 0;

void increment() { counter++; }

int getCount() { return counter; }

int main() {
    increment();
    cout << getCount() << endl;  // Output: 1
    return 0;
}
