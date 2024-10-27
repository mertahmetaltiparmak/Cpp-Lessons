#include <iostream>

using namespace std;

struct car {
    string brand;
    string model;
    int year;
};
void showMe(car* ptr) {
    cout << ptr -> brand << "\n";
    cout << ptr -> model <<" \n";
    cout << ptr -> year << "\n";
}
int main() {
    car myCar1 = {"BMW", "X6", 1999};
    
    showMe(&myCar1);

    return 0;
}