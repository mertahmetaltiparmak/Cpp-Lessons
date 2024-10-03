#include <iostream>
#include <string>
#include <cctype>
#include <cstring>

using namespace std;

int main() {

    /* string txt;
    cout << "Enter a string:";
    getline(cin, txt);
    int myLenght = txt.size();
    cout << txt << "\n";
    // burada boyutunu 2 artirrip artidrigi yere ++ koyuyor
    txt.resize(myLenght + 2, '+');
    cout << txt << "\n";
    // string'in boyutunu 14' dusuruyor.
    txt.resize(14);
    cout << txt << "\n"; */
    
    /* string txt;
    // txt.clear ile string'in icini temizleyebiliriz.
    cout << "Enter a string:";
    getline(cin, txt);
    cout << "size: " << txt.size() << "\n";
    cout << "lenght: " << txt.length() << "\n";
    cout << "capacity: " << txt.capacity() << "\n";
    cout << "max size: " << txt.max_size() << "\n"; */

    // shrink_to_fit sigdirmak icin kucult anlamina geliyor ve ram'de kullanmadigimiz alanin yerini acmamizi vs. yariyor.

    // .back ile yazdigimiz seyin son karakterine
    // .front ile de ilk karakterine
    // .at(i) [i] yerine gecebilir
    


    return 0;
}