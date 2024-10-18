#include <iostream>

using namespace std;

class employee {
    private:
        string name;
        int salary;
    public:
        void setSalary(int s) {
            salary = s;
        }
        void setName(string n) {
            name = n;
        }
        int getSalary() {
            return salary;
        }
        string getName() {
            return name;
        }
};
int main() {
    employee* em = new employee();
    em -> setName("Mert");
    em -> setSalary(15000);

    cout << "name: " << em-> getName() << "\n"; 
    cout << "salary: " << em-> getSalary() << "\n"; 


    return 0;
}