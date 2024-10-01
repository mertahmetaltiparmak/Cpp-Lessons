#include <iostream>

using namespace std;

int main() {
    int x, y, OBEB = 1, OKEK, smallNumber, i, numberOne, numberTwo;
    cout << "Iki sayi giriniz:";
    cin >> numberOne >> numberTwo;
    if (x < y)
        smallNumber = x;
    else (y < x);
        smallNumber = y;
        // mesela 6 girdik 6 ve 6'dan kucuk her sayiya boluyor eger varsa obeb degerine atiyor.
    for (i = smallNumber; i > 1; i--) {
        if ((numberOne % i == 0) && (numberTwo % i == 0)) {
            OBEB = i;
            break;
        } 
    }
    if (OBEB != 1) {
        // ortak kati disindaki kati capi disindakilerin carpimi okek'i verir.
        OKEK = numberOne * numberTwo / OBEB;
        cout << "\nOKEK: " << OKEK << "\n\n";
        cout << "\nEn buyuk ortak bolen " << OBEB << "'dir.\n\n";
    } else {
        OKEK = numberOne * numberTwo;
        cout << "\nOKEK: " << OKEK << "\n\n";
        cout << "\nen buyuk ortak bolen 1'dir.\n\n";
    }
    return 0;
}