#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float x, y, result;
    x = 7.1;
    y = 7.2;

    // max function'ni max degeri yazdirir. min ise min degeri.
    cout << max(x, y);
    // exp(x) e üzeri x degerini aliyor.
    // log(x) ise e tabaninda logaritmasini aliyor.
    // pow(x, y) ise x taban y kuvvet olmak uzeri sayinin ussunu alir.
    // sqrt(x) karekokunu alir.
    // cbrt(x) kubkokunu alir.
    // hypot(x, y) ise x karesi + y nin karesi = ucgenin ucuncu kenarinin karesine esitligini saglar yani pisagor
    // ceil(x) float x degerini tavanina yuvarliyor yani x = 7.1 ise 8'e yuvarlar. (-2.1 ise -2 'ye yuvarlar)
    // floor(x) float x degerini asagiya tabana yuvarlar yani x = 7.8 ise 7'ye yuvarlar.
    // round(x) ise tam ortadan bakar mesela x = 7.1 7,5 altinda ise 7'ye uzerindeyse 8'e yani duz yuvarlama islemi yapar.
    // copysign(x, y) birincinin degerini alir ikincinin ise isaretini alir mesela 7, -2 ise -7 yazar.
    // -7, -2 ise yine - 7 yazar. 7, 2 ise 7 yazar gibi.
    // abs(x) mutlak degere alir.

    return 0;
}