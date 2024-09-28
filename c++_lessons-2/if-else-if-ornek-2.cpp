#include <iostream>

using namespace std;

int main() {
    int number;

    cout << "Bir sayi giriniz:";
    cin >> number;

    if (number > 0) {
        cout << "\nBu sayi sifirdan buyuktur.";
    } else {
        cout << "\nBu sayi sifirdan kucuktur.";
    }
    return 0;
}