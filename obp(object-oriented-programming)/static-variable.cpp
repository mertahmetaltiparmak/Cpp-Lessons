#include <iostream>

using namespace std;
// Statik, bir degiskenin tanimlandigi fonksiyon geri çagrildiginda son degerini koruyacagi anlamina gelir. 
void sum() {
    // static kullaninca 19 degeri tasiyor artik tekrar 9 esit olmuyor.
    static int x = 9;
    x += 10;
    cout << "x:" << x << "\n";
}
int main() {
    // static kullanmadan once iki sum function'da 19 yazdirirken static kulaninca 19 29 diye gider.
    sum();
    sum();

    return 0;
}