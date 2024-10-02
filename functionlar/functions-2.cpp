#include <iostream>
// hata alirsak stringler'de bu kutuphaneyi cagir
#include <string>

using namespace std;

// boyle yaparak varsayilan parametre atadik eger bi deger girmezsek bunu yazdircak
void myCountry(string country = "Turkey") {
    cout << country << "\n";
}
int main() {

    myCountry();
    myCountry("USA");
    myCountry("UK");
    myCountry("GERMANY");

    return 0;
}