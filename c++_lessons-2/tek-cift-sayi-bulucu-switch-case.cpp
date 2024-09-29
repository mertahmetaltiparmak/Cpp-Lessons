#include <iostream>

using namespace std;

int main() {
    int number;

    cout << "pozitif bir sayi girin:";
    cin >> number;
    if (number <= 0){
        cout << "\npozitif demistim!";
    } else {
        switch (number % 2) {
            case 0:
                cout << "\nBu sayi cift sayidir.\n\n";
                break;
            case 1:
                cout << "\nBu sayi tek sayidir\n\n";
                break;
            default:
                cout << "\n???\n";
        }
    }
    return 0;
}