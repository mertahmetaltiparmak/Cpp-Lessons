#include <iostream>

using namespace std;

struct car {
    string brand;   
    string model;
    int year;
    // suslu parantezin sonunda belirtmessek asagidaki gibi struct olusturuyoruz.
};
int main() {
    // nesne olusturmaya benziyor
    // boyle  struct'in icine deger atabiliriz.
    car myCar1 = {"BMW", "X6", 1999};
    // boylede icine deger atabiliriz. 
    car myCar2;
    myCar2.brand = "Skoda";
    myCar2.model = "Superb";
    myCar2.year = 2001;

    cout << "Brand: " << myCar1.brand << "\n";
    cout << "Model: " << myCar1.model << "\n";
    cout << "Year: " << myCar1.year << "\n";
    cout << "-----------------------\n";
    cout << "Brand: " << myCar2.brand << "\n";
    cout << "Model: " << myCar2.model << "\n";
    cout << "Year: " << myCar2.year << "\n";    

    return 0;
}