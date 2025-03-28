#include <iostream>
using namespace std;

class Student {
private:
    string name;
    string studentID;
    char grade;

public:
    Student(string n, string id, char g) : name(n), studentID(id), grade(g) {}

    void getInfo() {
        cout << "Name: " << name << ", ID: " << studentID << ", Grade: " << grade << endl;
    }
};

int main() {
    Student student1("Alice", "S12345", 'A');
    student1.getInfo();
    return 0;
}
