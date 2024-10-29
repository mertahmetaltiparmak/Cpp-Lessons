#include <iostream>
#include <memory>

using namespace std;

class employee {
    int salary = 9000;
    string name = "Mert";
    public:
        employee() {
            cout << "Constructor invoked\n";
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
    // shared pointer ile unique arasindaki fark biri paylasilabilir digeri ise essizdir.(isimden yola cik)
    shared_ptr <employee> shPtr = make_shared <employee>();
    // pointer'i boylede kopyalayabiliriz.
    // ayni zamanda auto ile olusturabilirizde.
    auto shPtr2 = shPtr;
    // boyle de kopyalayabiliriz.
    shared_ptr <employee> shPtr3 = shPtr;

    cout << "Name: " << shPtr -> getName() << "\n";
    cout << "Salary: " << shPtr2 -> getSalary() << "\n";
    // pointer'in adresini alir.
    cout << "Address: " << shPtr3.get() << "\n";
    // bu  nesneyi kac pointer'in gosterdigini gosterir.
    cout << "Use Count: " << shPtr.use_count() << "\n";

    return 0;
}