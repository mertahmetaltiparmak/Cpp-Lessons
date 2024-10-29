#include <iostream>

using namespace std;

int main() {
    int* ptr = new int[7];
    int number, i, j = 5;

    cout << "Enter a number less than 10: ";
    cin >> number;
    try {
        // eger if'e girip deger atamazsa memory leak olur.
        // smart pointerlar bu tur yazilim hatalarindan kurtarmak icin ortaya cikmistir.
        // kendileri pointer'in ne zaman silincegine belirler ve isimizi kolaylastirir.
        if (number <= 10) {
            cout << "Correct\n";
            for (i = 0; i < 7; i++, j++) {
                ptr[i] = j;
            }
            delete[] ptr;
            ptr = nullptr;
        } else {
            throw 505;
        }
        } catch(int ex) {
            cout << "Warning! Please enter a number less than 10\n";
        }
    
    return 0;
}