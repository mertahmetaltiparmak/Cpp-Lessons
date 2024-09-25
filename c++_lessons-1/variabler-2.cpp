#include <iostream>
#include <clocale>
// turkce karakterleri yazdirmak icin gereken bir kutuphane

using namespace std;

int main() {
    setlocale(LC_ALL, "Turkish");
    // bu nu mainin hemen altinda belirttikten sonra artik turkce karakter yazabiliriz.
    cout << "Sa Türk Varmı" << "\n";
    // sabitler constlar ayni c'deki ile
    const float PI = 3.14;
    cout << "PI: " << PI << "\n";
    // << isareti cpp syntax'inden dolayi bir mantigi yoktur.
    unsigned int number = 5;
    int myNumber = 6;
    // unsigned isaretsizler eksi deger yazdiramaz sadece pozitif sayilar istedigimizde unsigned kullanilir.

    // tur degisimleri
    myNumber = static_cast<int>(7.12);
    // 7.14 mesela int cevirirsek 7 ciktisini aliriz yukaradada 7 aliriz

    // sizeof ile yine variable turlerinin kapladigi alani alabiliriz.
    cout << myNumber << endl;
    cout << &myNumber<< "\n";
    // myNumber'in adresini yazar c'deki gibi 

    return 0;
}