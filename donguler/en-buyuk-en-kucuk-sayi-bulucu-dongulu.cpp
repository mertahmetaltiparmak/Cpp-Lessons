#include <iostream>
// INT_MAX ve INT_MIN bu kutuphaneden aldik
#include <climits>
// INT_MAX ve digerini duz cout 'dan cikti aldirirsak integer sinirlarini verir.

using namespace std;

int main() {
    // c'deki smallestN = 0 yapmamizin nedeni eger eksili girersek en buyuk deger 0 olur ve eger 0 dan buyuk girersek sifir olur.
    // bunu onlemek icin o araliktaki tum degerlerden gittik.
    // eger dimdirek 0 yazarsak bize integer'mizin limitlerini veriyor.
    int number, i = 1, smallestN = INT_MAX, largestN = INT_MIN;
    cout << "cikis yapmak icin 0 tuslayin.\n\n";
    do {
        cout << i << ". sayi:";
        cin >> number;
        if (number == 0) {
            break;
        } if (number < smallestN) {
            smallestN = number;
        } if (number > largestN) {
            largestN = number;
        }
        i++;
    } while (number != 0);
    cout << "\n en kucuk sayi: "<< smallestN << "\n";
    cout << "\n en buyuk sayi: " << largestN << "\n\n"; 

    return 0;
}