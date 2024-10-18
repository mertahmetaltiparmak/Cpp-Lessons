#include <iostream>

using namespace std;

class employee {
    private:
        string name;
        int salary;
    public:
    // this sozcugunu constructorlarda da kullanabiliriz.
        void setName(string name) {
            this -> name = name;
        }
        void setSalary(int salary) {
            this -> salary = salary;
        }
        int getSalary() {
            return salary;
        }
        string getName() {
            return name;
        }
};
int main() {
    employee em;
    em.setName("Mert");
    em.setSalary(40000);
    
    cout << em.getName() << "\n" << em.getSalary() << "\n";

    return 0;
}