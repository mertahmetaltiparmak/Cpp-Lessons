#include <iostream>

using namespace std;

class employee {
    private:
        string name;
        int salary;
    public:
        employee(string name, int salary) {
            this -> name = name;
            this -> salary = salary;
        }
        // bu function'ninda class'in icindeki attributelere ulasmasini sagliyoruz.
        friend void print(employee em);
};
void print(employee em) {
    cout << "Name of the worker: " << em.name << "\n";
    cout << "Salary of the worker: " << em.salary << "\n";
}
int main() {
    employee em("Mert", 5000);
    print(em);

    return 0;
}