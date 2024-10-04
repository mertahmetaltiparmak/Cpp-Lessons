#include <iostream>
#include <string>

using namespace std;

int main() {
    /* string name = "Mert", lastname = "Altiparmak";
    name += " A. ";
    name += lastname;
    name += '\n';
    // Mert A. Altiparmak
    cout << name << "\n";
    */

    /*  string txt, txt2, txt3;

    txt2 = "writing ";
    txt3 = "Print 10 and then 5 more:";

    // uzerine deger ekliyor.
    txt.append(txt2);
    // ikinci metnin sadece 6. karakterden sonra 3 karakterini alcak yani 10 + bosluk
    txt.append(txt3, 6, 3);
    // sadece ilk 5 karakterini alip dots ekliyecek
    txt.append("dots are good", 5);
    // tamamini ekliyecek
    txt.append("here:");
    // 10 tane nokta ekliyeceke
    txt.append(10, '.');
    // txt3'de 0'dan basliyip 8 karakter olana kadar gelip oradan basliyacak yani then 5 more yazdiracak
    txt.append(txt3.begin() + 8, txt3.end());
    txt.append(5, '.');

    cout << txt << "\n"; */

    string txt, base;
    // degeri silip baska bi deger atiyor.
    base = "This explanation is not enough for me";
    // txt'ye base'in icindeki degeri atadi ve icindeki degeri yaziracak.
    txt.assign(base);
    cout << txt << "\n";
    // basedeki 5.karakterden 11.karaktere kadar olanlari yazdiracak yani explanation ciktisini alacagiz
    txt.assign(base, 5, 11);
    cout << txt << "\n";
    // 7 karakter yazdiracak bu cumleden yani life is ciktisini alacagiz.
    txt.assign("life is cool", 7);
    cout << txt << "\n";
    // butun cumleyi yazdiracak.
    txt.assign("I love code in C++ and C");
    cout << txt << "\n";
    // 7 tane * yazdiracak.
    txt.assign(7, '*');
    cout << txt << "\n";
    // 17. karakterden basliyip sondan 7. karaktere kadar yazdiracak yani is nor enough yazdiracak.
    txt.assign(base.begin()+17, base.end()-7);
    cout << txt << "\n";

    return 0;
}