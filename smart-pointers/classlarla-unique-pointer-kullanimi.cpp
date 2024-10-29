#include <iostream>
#include <memory>

using namespace std;

class employee {
    public:
        string name = "Mert";
        int salary = 5000;
        employee() {
            cout << "Constructor invoked\n";
        }
        ~employee() {
            cout << "Destructor invoked\n";
        }
};
int main() {
    // bu sekilde olusturup delete ve new yazma isinden kurtulduk artik kendisi otomatik destructor calistiracak.
    unique_ptr<employee> uqPtr = make_unique <employee>();
    cout << "Name: " << uqPtr -> name << "\n";
    cout << "Salary: " << uqPtr -> salary << "\n";

    return 0;
}