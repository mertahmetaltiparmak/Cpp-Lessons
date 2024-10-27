#include <iostream>

using namespace std;

typedef struct car {
    string brand;
    string model;
    int year;
}araba;
void showMe(car* ptr) {
    cout << ptr -> brand << "\n";
    cout << ptr -> model << "\n";
    cout << ptr -> year << "\n";
}
int main() {
    araba myCar1 = {"BMW", "X6", 1999};
    showMe(&myCar1);
    cout << "\n" << "Brand: " << myCar1.brand << "\n";
    cout << "Model: " << myCar1.brand << "\n";
    cout << "Year: " << myCar1.year << "\n";

    return 0;
}