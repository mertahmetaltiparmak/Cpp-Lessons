#include <iostream>

using namespace std;
// bu bilgiyi yazmayi unutmusun destructorlarla alakali buraya yaziyorum bu kod ile ilgili degildir.
// destructorlar bir nesne son fonksiyonunu yaptiktan sonra yani nesne yok edilirken cagirilir. simgesi ~
class employee {
    private:
        string name;
        int salary;
        double code;
    public:
        employee() {
            name = "Mert";
            salary = 50000;
            code = 5.5;
        }
        employee(int s) {
            name = "Ahmet";
            salary = s;
            code = 6.4;
        }
        employee(int s, string n) {
            name = n;
            salary = s;
            code = 1.1;
        }
        employee(int s, string n, double c) {
            name = n;
            salary = s;
            code = c;
        }
        void print() {
            cout << "Name: " << name << "\n";
            cout << "Salary: " << salary << "\n";
            cout << "Code: " << code << "\n\n"; 
        }
};
int main() {
    employee em;
    employee em2(60000);
    employee em3(65000, "Adam");
    employee em4(70000, "Furkan");

    em.print();
    em2.print();
    em3.print();
    em4.print();

    return 0;
}