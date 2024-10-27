#include <iostream>

using namespace std;

struct car {
    string brand;
    string model;
    int year;
};
int main() {
    car myCar1 = {"BMW", "X6", 1999};
    // bir pointer olusturduk ve bu pointer'a myCar1'in adresini verdik.
    car* ptr = &myCar1;

    cout << ptr -> brand << "\n";
    cout << ptr -> model <<" \n";
    cout << ptr -> year << "\n";

    return 0;
}