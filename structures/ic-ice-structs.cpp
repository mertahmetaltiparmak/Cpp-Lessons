#include <iostream>

using namespace std;

struct address {
    string cityName;
    string district;
    int no;
};
struct employee {
    string name;
    string lastname;
    int workerno;
    address add;
};
int main() {
    employee em = {"Mert", "Altiparmak", 5, {"Konya", "Necmettin Erbakan üni", 19}};
    
    cout << "Name: " << em.name << "\n";
    cout << "Lastname: " << em.lastname << "\n";
    cout << "Worker no: " << em.workerno << "\n";
    cout << "City Name: " << em.add.cityName << "\n";
    cout << "District: " << em.add.district << "\n";
    cout << "No: " << em.add.no << "\n";

    return 0;
}