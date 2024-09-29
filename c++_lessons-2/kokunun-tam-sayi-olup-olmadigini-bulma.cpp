#include <iostream>
#include <math.h>
// sqrt() yine kok alma function'i c'de oldugu gibi

using namespace std;

int main() {
    int number = 0, result = 0;

    cout << "pozitif bir sayi girin:";
    cin >> number;

    if (number <= 0) {
        cout << "\npozitif demistim!\n";
    } else {
        result = sqrt(number);
        // burada cift ve tek sayilarin hepsini aliyoruz 0 ise cift sayilar oluyor 1 ise tek sayilar algilama uyg. gibi
        if (result % 2 == 0 || result % 2 == 1) {
            cout << "\n" << number << " koku tam sayidir.\n";
        } else {
            cout << "\n" << number << " koku tam sayi degildir.\n";
        }
    }
    return 0;
}