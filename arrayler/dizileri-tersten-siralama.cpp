#include <iostream>

using namespace std;
// ben yazdim :/
int main() {
    int myNumbers[6], i;
    cout << "Dizideki sayilari girin:";
    for (i = 0; i < 7; i++) {
        cin >> myNumbers[i];
    }
    cout << "\nOrjinal siralama: ";
    for (i = 0; i < 7; i++)
        cout << myNumbers[i] << " ";
    cout << "\nTers siralama: ";
    for (i = 6; i >= 0; i--) 
        cout << myNumbers[i] << " ";

    return 0;
}