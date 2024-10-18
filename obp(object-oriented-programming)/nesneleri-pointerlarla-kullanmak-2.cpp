#include <iostream>

using namespace std;

class employee {
    private:
        string* name;
        int* salary;
    public:
    employee(string n, int s) {
        name = new string;
        salary = new int;
        *name = n;
        *salary = s;
    }
    // delete komutunu ramda gereksiz yer kaplamasin diye nesneleri silmek icin kullaniyoruz.
    ~employee() {
        delete name;
        delete salary;
    }
    void showInfo() {
        cout << "name: " << *name << "\n";
        cout << "salary: " << *salary << "\n";
    }
};
int main() {
    employee* em = new employee("Azra", 13000);
    em -> showInfo();
    delete em;

    return 0;
}