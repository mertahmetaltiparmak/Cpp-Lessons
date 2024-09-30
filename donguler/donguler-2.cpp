#include <iostream>

using namespace std;

int main() {
    int i = 1, number;

    while (number != 0) {
        cout << "\n\n1 - 10 (0 - Cikis) arasi bir sayi girin:";
        cin >> number;

        if (number == 0) {  
            cout << "\nGorusuruz\n";
            break;
        } else if (number < 1 || number > 10) {
            cout << "1 - 10 arasi demistim ??";
        } else {
            while (i <= 10) {
                cout << "\n" << number << " X " << i << " = " << number * i;
                i++; 
            }
        }
    }
    return 0;
}