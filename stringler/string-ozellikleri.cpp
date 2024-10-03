#include <iostream>
#include <string>

using namespace std;
// getline(cin, myStrinh) ile bosluklu cumleler alabiliyoruz cin'nin aksine.
int main() {
    // turkce karakter yazma calismiyor.
    setlocale(LC_ALL, "tr_TR.utf8");

    string x = "20", y = "70", z;
    // normal metin toplar gibi yapar ve 2070 yazar.
    z = x + y;
    cout << "\n" << z << "\n";
    string myText = "Mert Ahmet";
    // strlen gibi uzunlugu aliyor .lenght'de ayni sey
    cout << "uzunluk: " << myText.size() << "\n";  

    // cin'lerin icine turkce karakter yazmak icin
    /* string fullName;
    cout << "adinizi girin:";
    getline(cin, fullName);
    cout << "adiniz: " << fullName << "\n"; */

    // txt.at(2) 'de ayni islemi yapiyor 
    string txt = "hope";
    txt[0] = 'p';
    cout << txt[2] << "\n";
    cout << txt;
    // escape sequance c'ile ayni cok kullanmadigim icin yazmiyorum. ihtiyacin olur 41.video

    return 0;
}