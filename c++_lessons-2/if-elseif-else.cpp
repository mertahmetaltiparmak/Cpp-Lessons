#include <iostream>

using namespace std;

int main() {
    int numberOne, numberTwo;

    cout << "Birinci sayiyi girin:";
    cin >> numberOne;
    cout << "\nIkinci sayiyi girin:";
    cin >> numberTwo;

    if (numberOne > numberTwo) {
        cout << "\n\nBirinci sayi ikinci sayidan buyuktur";
    } else if (numberTwo > numberOne) {
        cout << "\n\nIkinci sayi birinci sayidan buyuktur";
    } else {
        cout << "\n\nBu iki sayi esittir.";
    }

    return 0;
}