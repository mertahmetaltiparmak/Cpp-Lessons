#include <iostream>

using namespace std;
// kendim yazdim bi kismini ama syntax'i cok garibime gitti.
class mathOperation {
    public:
    int number1;
    int number2;
        mathOperation(int x, int y) { // constructors
           number1 = x;
           number2 = y;
        }
    int toplama() {
        return number1 + number2;
    }
    int cikarma() {
        return number1 - number2;
    }
    int carpma() {
        return number1 * number2;
    }
    int bolme() {
        return number1 / number2;
    }
    void print() {
        cout << "Toplami:" << toplama() << "\n";
        cout << "Cikarmasi:" << cikarma() << "\n";
        cout << "Carpimi:" << carpma() << "\n";
        cout << "Bolumu:" << bolme() << "\n";
    }
};
int main() {
    int numberOne, numberTwo;
    cout << "iki sayi giriniz:";
    cin >> numberOne >> numberTwo;
    // isimizi baya kolaylastirdi.
    mathOperation myObj(numberOne, numberTwo); // obje olusturuldu ve constructors'un icine gitcek degerler atildi.
    // int yerine void kullanabildik cunku class icinde islem yaptik zaten o yuzden hem duzenli hem de kisa oldu.
    myObj.print(); // method cagirildi ve void function kullanarak yazdirildi.

    return 0;
}