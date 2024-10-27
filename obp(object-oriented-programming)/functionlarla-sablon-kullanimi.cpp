#include <iostream>

using namespace std;
/* template <typename t>: Bu, t adli bir sablon tipi tanımlar.
 * Fonksiyon çagriliginda, t parametresi degiskenlerin turune gore otomatik olarak belirlenir. */
template <typename t>
// t yapinca variable'in turunu kendi duruma gore belirliyor.
// bu function iki variable'in yer degistirmesini saglar
void replace(t &x, t&y) {
    t z = x;
    x = y;
    y = z;
}
int main() {
    int x = 7;
    int y = 19;
    cout << "x: " << x << "\t" << "y : " << y << "\n";
    replace(x, y);
    cout << "x: " << x << "\t" << "y : " << y << "\n";
    cout << "-------------------------\n";

    char letter1 = 'm';
    char letter2 = 't';
    cout << "letter1: " << letter1 << "\t" << "letter2: " << letter2 << "\n";
    // replace <>(letter1, letter); seklindede yazabilir veya replace <char>(letter1,letter2); seklindede olabilir.
    replace<>(letter1, letter2);
    cout << "letter1: " << letter1 << "\t" << "letter2: " << letter2 << "\n";
    cout << "-----------------------------\n";   

    double a = 7.5;
    double b = 19.19;
    cout << "a: " << a << "\t" << "b : " << b << "\n";
    replace<double>(a, b);
    cout << "a: " << a << "\t" << "b : " << b << "\n";
    cout << "--------------------------\n";

    return 0;
}