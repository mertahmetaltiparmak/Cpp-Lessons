#include <iostream>
// strcpy falan bu kutuphanede
// c dilindeki her sey burada var ve aynidir
#include <cstring>
// burada c'de nasil yaptigimizi arraylere ihtiyacimiz oldugunu goruyoruz.

using namespace std;

int main() {
/*     // \0 cumlenin bittigini belirtiyor.
    char message[3] = {'S', 'a', '\0'};
    cout << message << "\n"; */

    int myLenght;
    char str1[10] = "Mert";
    char str2[10] = "Ahmet";
    char str3[10];
    // strcpt stringcopy str1'deki degeri str3'e atiyor.
    strcpy(str3, str1);
    cout << str3 << "\n" << str1;
    // ilk degerde birlestirdi.
    // strcat iki string'i topluyor mesele altaki code MertAhmet yazdirir.
    strcat(str1, str2);
    cout << "\nstrcat: " << str1 << "\n";
    // strlen string lenght stringin uzunlugunu yazdirir.
    myLenght = strlen(str1);
    cout << "\nstrlen: " << myLenght << "\n"; 

    return 0;
}