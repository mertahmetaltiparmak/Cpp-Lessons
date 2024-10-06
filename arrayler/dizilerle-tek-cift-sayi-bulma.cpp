#include <iostream>

using namespace std;

int main() {
    int x, i;
    
    cout << "Pozitif bir sayi giriniz:";
    cin >> x;
    if (x <= 0)
        cout << "pozitif demistim";
    else {
        int numbers[x];
        cout << "Dizideki sayilari girin:";
        for (i = 0; i < x; i++) 
            cin >> numbers[i];
        cout << "\nTek sayilar:";
        for (i = 0; i < x; i++) {
            if (numbers[i] % 2 == 1)
                cout << numbers[i] << " ";
        }
        cout << "\nCift sayilar:";
        for (i = 0; i < x; i++) {
            if (numbers[i] % 2 == 0)
                cout << numbers[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}