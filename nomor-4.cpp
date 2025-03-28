#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    Counter() { count = 0; }

    void increment() { count++; }

    int getCount() { return count; }
};

int main() {
    Counter counter;
    counter.increment();
    cout << counter.getCount() << endl;  // Output: 1
    return 0;
}
