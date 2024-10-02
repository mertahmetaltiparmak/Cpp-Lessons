#include <iostream>

using namespace std;
// parametre siralamalari onemli ayni c'de oldugu gibi
void print() {
    cout << "toplam: ";
}

int sum(int x, int y) {
    print();
    return x + y;
}

int main() {
    int value, numberOne, numberTwo;
    // boyle variable'da atayabiliyoruz.

    cout << "birinci sayiyi girin:";
    cin >> numberOne;
    cout << "\nikinci sayiyi girin";
    cin >> numberTwo;

    cout << "\n" <<sum(numberOne, numberTwo) << "\n";
/* 
    value = sum(5,2) * 5;

    cout << value << "\n"; */

    return 0;
}