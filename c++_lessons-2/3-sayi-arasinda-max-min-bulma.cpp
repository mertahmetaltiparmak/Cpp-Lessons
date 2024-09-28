#include <iostream>

using namespace std;
// boyle isi
int main() {
    int numberOne, numberTwo, numberThree, max , min;

    cout << "birinci sayiyi girin:";
    cin >> numberOne;
    
    cout << "\nikinci sayiyi girin:";
    cin >> numberTwo;
    
    cout << "\nucuncu sayiyi girin:";
    cin >> numberThree;

    max = min = numberOne;

    if (numberTwo > max) {
        max = numberTwo;
        // else if yaptigimda kod calismadi ??
    } if (numberThree > max) {
        max = numberThree;
    } else if (numberOne < numberTwo && numberOne < numberThree) {
        min = numberOne;
    } else if (numberTwo < numberOne && numberTwo < numberThree) {
        min = numberTwo;
    } else if (numberThree < numberThree && numberThree < numberOne) {
        min = numberThree;
    }
    cout << "\nmax:" << max << "\n";
    cout << "min:" << min << "\n";     

    return 0;
}