#include <iostream>

using namespace std;

int main() {
    int day;

    cout << "bir sayi girin:";
    cin >> day;

    switch (day) {
        case 1:
            cout << "\nMonday\n";
            break;
        case 2:
            cout << "\nTuesday\n";
            break;   
        case 3:
            cout << "\nWednesday\n";
            break;
        case 4:
            cout << "\nThursday\n";
            break;
        case 5:
            cout << "\nFriday\n";
            break;
        case 6:
            cout << "\nSaturday\n";
            break;
        case 7:
            cout << "\nSunday\n";
        default:
            cout << "\nhatali deger\n";
    }
    return 0;
}