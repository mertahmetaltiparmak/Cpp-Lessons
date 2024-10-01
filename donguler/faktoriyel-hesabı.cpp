#include <iostream>

using namespace std;

int main() {
    int number, i, factorial = 1;

    cout << "Bir sayi girin:";
    cin >> number;

    if (number < 0) {
        cout << "Sifirdan buyuk bir sayi giriniz.";
        return 0;
    } else {
        // i = number; i >= 1; i-- de yapabilirdik.
        for (i = 1; i <= number; i++) {
            // factorail 1 i bir icinde 1 degeri oluyor sonra 2 ile carpiliyor 2 degeri tutuyor 2 degeri 3 ile diye devam ediyor.
            factorial = factorial * i;
            }
        cout << number << " != " << factorial << "\n" ; 
    }
    system("pause");
    return 0;
}