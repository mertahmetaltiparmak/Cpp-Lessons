#include <iostream>
#include <string>

using namespace std;

class car { // access specifier
    // public yazmayi UNUTMA!!!
    public:
        string name; // attirubute
        string color;
        int year;
        void drive() { // method

        }
        void breaks() { // method

        }
};
int main() {
    car ford;
    ford.name = "mustang";
    ford.color = "black";
    ford.year = 1999;

    cout << "Araba ford: " << ford.name << "\n";
    cout << "rengi: " << ford.color << "\n";
    cout << "yili: " << ford.year << "\n";

    car fiat;

    fiat.name = "egea";
    fiat.color = "grey";
    fiat.year = 2014;

    cout << "\naraba fiat: " << fiat.name << "\n";
    cout << "rengi: " << fiat.color << "\n";
    cout << "yili: " << fiat.year << "\n";

    return 0;
}