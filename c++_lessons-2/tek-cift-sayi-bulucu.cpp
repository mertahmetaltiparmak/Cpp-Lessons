#include <iostream>

using namespace std;

int main() {
    int number;

    cout << "bir sayi giriniz:";
    cin >> number;

    if (number % 2 == 0) {
        cout << "\nBu sayi bir cift sayidir.\n";
    } else {
        cout << "\nBu sayi bir tek bir sayidir.\n";
    }
    return 0;
}