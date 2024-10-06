#include <iostream>

using namespace std;

int main() {
    int mySize, i, largest = 0, smallest = 100, largeIndex, smallIndex;
    cout << "Sinifin boyutunu girin:";
    cin >> mySize;
    int notes[mySize], studentNo[mySize];
    for (i = 0; i < mySize; i++) {
        cout << "Ogrenci numarasi / Ogrencinin notu: ";
        // studentno[i] yaptik eger en yuksek notlu ogrenci olursa indexnumarasini oraddaki i esitliyor sonra ise 0 liyip dongude kullaniyor.
        cin >> studentNo[i] >> notes[i];
    }
    for (i = 0; i < mySize; i++) {
        if (notes[i] > largest) {
            largest = notes[i];
            largeIndex = i;
        }
        if (notes[i] < smallest) {
            smallest = notes[i];
            smallIndex = i;
        }
    }
    cout << "\nOgrenci numarasi " << studentNo[largeIndex] << " olan en yuksek notu almistir. not: " << largest << "\n";
    cout << "\nOgrenci numarasi " << studentNo[smallIndex] << " olan en dusuk notu almistir. not: " << smallest << "\n";

    return 0;
}