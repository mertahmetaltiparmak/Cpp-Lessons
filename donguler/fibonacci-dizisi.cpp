#include <iostream>

using namespace std;

int main() {
    int number, x = 1, y = 1, z = 1;

    cout << "bir sayi giriniz:";
    cin >> number;

    cout << "\n1  1  ";
    // ilk 2 elemani yazdigimiz icin - 2 girdik mesela 10 girince 12 eleman vermesin diye
    for (int i = 1; i <= number - 2; i++) {
        x = y;
        // y'nin icindeki degeri x'e atiyoruz.
        y = z;
        // z'in icindeki degeri y'ye atiyoruz.
        z = x + y;
        cout << z << "  ";
    }
    cout << "\n\n";
    return 0;
}