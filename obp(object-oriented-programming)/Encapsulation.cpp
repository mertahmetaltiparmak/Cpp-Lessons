#include <iostream>

using namespace std;
// encapsulation private'in icindeki bir seye method veya attribute'lerle ulasma yontemidir bunu icin asagidaki ornegi yaptim
class Employee {
    private:
        int salary;
    public:
        void setSalary(int x) { // set 
            salary = x;
        }
        int getSalary() { // get
            return salary;  
        }

};
// bu ornekle private icindeki bi degere ulasip icine deger atiyip goruntuledik ve buna Encapsulation yani kapsuleme dedik.
int main() {
    Employee emp;

    emp.setSalary(5600);
    cout << emp.getSalary() << "\n";

    return 0;
}