#include <iostream>

using namespace std;

int main() {
    // typedef ile mesela int yerine tamsayi yazabiliyoruz ornk:
    typedef int tamsayi;
    typedef char karakter;
    tamsayi x = 6;
    cout << x << "\n";
    
    karakter ch = 'x';
    cout << ch << "\n";

    return 0;
}