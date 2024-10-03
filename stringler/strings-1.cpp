#include <iostream>
#include <string>

using namespace std;

int main() {
    string myText = "Sa turk varmi ?";
    string str1 = "Mert";
    string str2 = "Ahmet";
    string str3;
    // strcopy yerine dolu olanin icindeki degeri diger string'e altaki kopyalabiliriz.
    str3 = str1;
    cout << "\n" << myText << "\n";
    cout << "\n" << str3 << "\n";
    // strcat yerine iki stringi asagidaki birlestirebiliriz.
    // boyle boslukta birakibiliryoruz.
    str3 = str1 + " " + str2;
    cout << "\n" << str3 << "\n";
    // append'i boyle kullanip yine iki stringi birlestirebiliriz.
    // (5, 'K') icine boyle seylerde yazabiliriz.
    str3 = str1 .append(str2);
    cout << "\n" << str3 << "\n";

    return 0;
}