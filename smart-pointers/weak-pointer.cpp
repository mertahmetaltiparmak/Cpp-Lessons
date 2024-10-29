#include <iostream>
#include <memory>

using namespace std;

class employee {
    string name;
    int salary;
    public:
        employee(int salary, string name) {
            cout << "Constructor invoked\n";
            this -> salary = salary;
            this -> name = name;
        }
        ~employee() {
            cout << "Destructor invoked\n";
        }
        int getSalary() {
            return salary;
        }
        string getName() {
            return name;
        }
};
int main() {
    shared_ptr <employee> sP = make_shared <employee> (7000, "Mert");
    weak_ptr <employee> wP = sP; // weak_ptr, shared_ptr'tan bir zayif referans aliyor.

    if (!wP.expired()) { // weak_ptr'in referans verdigi nesne mevcut mu?
        // weak pointerlari yazdirirken boyle kullaniyoruz.
        cout << (*wP.lock()).getSalary() << "\n"; // nesneye erişim
        cout << (*wP.lock()).getName() << "\n"; // nesneye erişim
    }
    // sP'e resetlendiginde artik wP gecersiz sayilacaktir.
    sP.reset(); // shared_ptr'in referansi kaldiriliyor.

    return 0;
}