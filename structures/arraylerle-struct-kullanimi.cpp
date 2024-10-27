#include <iostream>

using namespace std;

struct employee {
    string name;
    string lastname;
    string task;
    int age;
};

int main() {
    employee em[] = {"Mert", "Altiparmak", "Programmer", 19, "Ahmet", "Altiparmak", "Programmer", 21, "Kaan", "Guven", "SalesMan", 25};
    cout << "list of workers\n\n";
    for (int i = 0; i < 3; i++) {
        cout << "Name: " << em[i].name << "\n";
        cout << "Lastname: " << em[i].lastname << "\n";
        cout << "Task: " << em[i].task << "\n";
        cout << "Age: " << em[i].age << "\n";
        cout << "----------------------\n";
    }
    return 0;
}