#include <iostream>
using namespace std;
// yukaridaki namespace unutma!!

int main() {
    // c veri tipleri ile ayni ama ekstra bool diye bir sey var
    bool myBool = true;
    // bool variable'i true (1) veya false (0) olmak uzere iki deger atayabiliriz.
    char letter = 'm';
    float myFloat = 5.55;
    double myDouble = 1232.233;
    int number = 5;
    // c'den farkli olarak string ile yapabiliyoruz c deki gibi arraylere gerek yok
    string cumle = "Sa turk var mi";
    // c'deki gibi bu tarz variable degisiklikleri yapabiliryoruz.
    number = 55;
    // variable toplama islemleride ayni mantik 
    int x = 1, y = 2, z = 3;
    // ayni mantikle yine birden fazla variable yazabiliriz

    cout << "x = " << x << endl;
    cout << "y = " << y << "\n";
    // boylede yazabiliriz cumleden sonra asagi inmesini istiyorsak.
    cout << "z = " << z << endl;


    cout << "Benim numaram :" << number << endl;
    number = 9;
    cout << "Benim numaram :" << number << endl;
    cout << "\n" << cumle;
    // endl \n ile ayni isleye sahiptir.

}