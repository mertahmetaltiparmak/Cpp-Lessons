#include <iostream>

using namespace std;

int main() {
    int number = 0, result = 0, ab, cd;
    
    cout << "Dort basamakli bir sayi girin:";
    cin >> number;

    // ilk iki basamagi verir.
    ab = number / 100;
    // son iki basamagi verir.
    cd = number % 100;

    result = (ab+cd) * (ab+cd);
    // 3025 ozel bir sayidir eger algilarsa program calisiyordur.
    if (result == number) {
        cout << "\nOzel sayidir.\n";
    } else {
        cout << "\nozel sayi degildir.\n";
    }
    return 0;
}