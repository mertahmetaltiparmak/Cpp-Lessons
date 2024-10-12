#include <iostream>

using namespace std;
// OBP: object oriented programming
// struct yapisina benziyor
// myClass bir kod blogu degil istersek oraya car yazip araba ile ilgili bir seylerde alabiliriz.
class myClass { // access specifier 
// eger public yazmayi unutursan private olarak tanimlanir ve int main'in icinde kullanilamaz kelime anlamlarinda yola bile cikabilirsin.
    public:
        int number1; // attribute (nitelik)
        int number2;
        string name;
};
int main() {
    myClass myObject; // nesne olusturuldu.
    myObject.number1 = 5;
    myObject.number2 = 20;
    myObject.name = "Mert";

    cout << myObject.number1 << "\n";
    cout << myObject.number2 << "\n";
    cout << myObject.name << "\n";

    myClass myObject2; // nesne olusturuldu 

    myObject2.number1 = 6;
    myObject2.number2 = 21;
    myObject2.name = "Ahmet";

    cout << "\n";
    cout << myObject2.number1 << "\n";
    cout << myObject2.number2 << "\n";
    cout << myObject2.name << "\n";

    return 0;
}