#include <iostream>

using namespace std;

class employee {
    private:
        int salary;
    public:
        void setSalary(int s) {
            salary = s;
        }
        // int main'in icindeki deger disinda bu functionin icinde deger atamaya calisirsak hata aliriz.
        int getSalary()const{
            // hata aliriz bunu yazarsak
            // salary = 90000;
            return salary;
        }
};
int main() {
    employee em;
    em.setSalary(20000);
    cout << em.getSalary() << "\n";

    return 0;
}