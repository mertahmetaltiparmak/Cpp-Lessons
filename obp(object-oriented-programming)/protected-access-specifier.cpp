#include <iostream>

using namespace std;

class employee {
    protected:
        int salary = 30000;
    public:
        // buradaki constructor'da miras veriliyor.
        employee() {
            cout << "Miras verildi.\n";
        }
};
class person:public employee {
    public:
        person() {
            cout << "Class olusturuldu.\n"; // constructor
        }
        int bonus;
        int getSalary() {
            return salary;
        }
};
int main() {
    // protected olan bir attirubate veya method'a miras aldigimiz class'dan ulasabiliriz.
    person p1;
    p1.bonus = 500;

    cout << "Maas: " << p1.getSalary() << "\n";
    cout << "Bonus: " << p1.bonus << "\n";

    return 0;
}