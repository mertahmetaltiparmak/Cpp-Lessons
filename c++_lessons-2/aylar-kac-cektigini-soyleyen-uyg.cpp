#include <iostream>

using namespace std;

void months();

int main() {
    int month;
    months();

    cout << "\nAy seciniz:";
    cin >> month;

    switch (month) {
        case 4:
        case 6:
        case 9: 
        case 11:
            cout << "\n30 ceken ay.\n";
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "\n31 ceken ay.\n";
            break;
        case 2:
            cout << "\n28 veya 29 ceken ay.\n";
            break;
        default:
            cout << "\ngecersiz deger!\n";
    }
    return 0;
}
void months() {
    cout << "1 - Ocak\n" << "2 - Subat\n" << "3 - Mart\n" << "4 - Nisan\n" << "5 - Mayis\n" << "6 - Haziran\n";
    cout << "7 - Temmuz\n" << "8 - Agustos\n" << "9 - Eylul\n" << "10 - Ekim\n" << "11 - Kasim\n" << "12 - Aralik\n";
}