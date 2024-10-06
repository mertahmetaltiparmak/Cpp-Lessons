#include <iostream>
#include <time.h>

using namespace std;

void sortIt();
void showArray();
void showArrayReverse();

int numbers[7], i;

int main() {
    cout << "Dizinin degerlerini girin:";
    for (i = 0; i < 7; i++)
        cin >> numbers[i];
    cout << "\nSiralamadan once\n";
    showArray();
    cout << "\nKucukten buyuge siralaniyor...\n";
    _sleep(1500);
    sortIt();
    cout << "\nSiralamadan sonra\n";
    showArray();
    cout << "\n";
    cout << "buyukten kucuge siralaniyor...\n";
    _sleep(1500);
    showArrayReverse();
    cout << "\n";

    return 0;
}
void sortIt() {
    int j, reserve;
    for (i = 0; i < 7; i++) {
        for (j = i + 1; j < 7; j++) {
            if (numbers[j] < numbers[i]) {
                reserve = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = reserve;
            }
        }
    }
}
// kucukten buyuge siralama
void showArray() { 
    for (i = 0; i < 7; i++) {
        cout << numbers[i] << " ";
    }
}
void showArrayReverse() {
    for (i = 6; i >= 0; i--) {
        cout << numbers[i] << " ";
    }
}