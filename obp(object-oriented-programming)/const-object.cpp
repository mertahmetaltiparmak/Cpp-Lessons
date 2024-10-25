#include <iostream>

using namespace std;

class employee {
    public:
        int salary;
        employee(int salary) {
            this -> salary = salary;
        }
};
int main() {
    const employee em(30000);
    // em.salary = 25000; bunu yaparsak hata aliriz. cunku const olarak belirledik obj'mizi
    cout << em.salary << "\n";

    return 0;
}