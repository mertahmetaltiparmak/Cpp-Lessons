#include <iostream>

using namespace std;

struct {
    int age;
    string name;
    double salary;
}myStructure;

int main() {
    myStructure.age = 20;
    myStructure.name = "Mert";
    myStructure.salary = 5500.5;

    cout << "Name: " << myStructure.name << "\n";
    cout << "Age: " << myStructure.age << "\n";
    cout << "Salary: " << myStructure.salary << "\n";
}