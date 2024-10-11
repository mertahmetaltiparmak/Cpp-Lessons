#include <iostream>

using namespace std;

int main() {
    int x = 5;
    // pointerin icindeki degeri x'in adresi olarak atadi
    int* ptr = &x;
    // x'i yazdirir
    cout << x << "\n";
    // x'in adresini yazdirir.
    cout << &x << "\n";
    // pointerin icindeki degeri yazdirir.(x'in adresi)
    cout << ptr << "\n";
    // pointerin icindeki adresin degerini yazdirir.(x'in degeri)
    cout << *ptr << "\n\n";
    
    // pointerleri char veya stirng olarakda tanimlayabiliriz
    string text = "Food";
    // * isaretini boyle kullanmak onerilir.
    string* xptr = &text;
    cout << text << "\n";
    cout << &text << "\n";
    cout << xptr << "\n";
    cout << *xptr << "\n";
    // asagidaki gibi pointerin adresindeki degeri degistirebiliriz.
    *xptr = "Beverage";
    cout << text << "\n";
    cout << *xptr << "\n";

    return 0;
}