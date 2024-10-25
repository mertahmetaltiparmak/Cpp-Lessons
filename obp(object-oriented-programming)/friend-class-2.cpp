#include <iostream>

using namespace std;

class employee {
    private:
        string name;
        int salary;
    public:
        // constructor
        employee(string name, int salary) {
            this -> name = name;
            this -> salary = salary;
        }
        // destructor
        ~employee() {
            cout << "Obje bitti.\n";
        }
        // boyle classlarida friend yapabiliyoruz ve attributelara ulasabiliyor.
    friend class worker;
};
class worker {
    public:
        void print(employee em) {
            cout << "Name: " << em.name << "\n";
            cout << "Salary: " << em.salary << "\n";
    }
};
int main() {
    // niye iki kez destructor calistirdi ??
    employee em("Mert", 500);
    worker wr;

    wr.print(em);
}