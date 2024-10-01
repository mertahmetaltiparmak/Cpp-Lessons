#include <iostream>

using namespace std;

int main() {
    int myArray[10] = {1, 2, 3, 4, 5, 6, 7, 8 , 9, 10};
    // sadece cpp var bu ozellik arraydeki degerleri yazdirmayi sagliyor 
    // c'de bunu yapksak myArray[i] seklinde dongu ile yazdirirdik.
    for (int i : myArray) {
        cout << i << "\t";
    }
    return 0;
}