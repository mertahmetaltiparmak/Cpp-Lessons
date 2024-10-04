#include <iostream>
#include <string>

using namespace std;

int main() {
    // ?? iterator nedir anlamadim

    string txt = "sa turk varmi";
    for (string::iterator it = txt.begin(); it != txt.end(); it++)
        cout << *it;

    cout << "\n\n"; 
    // tersten yazdiyor.
    string txt1 = "now step live";
    for (string::reverse_iterator it1 = txt1.rbegin(); it1 != txt1.rend(); it1++)
        cout << *it1;
    cout << "\n\n";

    for (auto it2 = txt1.cbegin(); it2 != txt1.cend(); it2++)
        cout << *it2;
    cout << "\n\n";
    for (auto it2 = txt1.crbegin(); it2 != txt1.crend(); it2++) 
        cout << *it2;
    
    cout << "\n\n";

    string text = "sa turk var mi";
    // 3. indeksden basla yani t den basal ve 5 karakter yazdir.
    string text2 = text.substr(3,5);
    cout << text2 << "\n";
    // turk'den sonrasini al diyoruz.
    int i = text.find("turk");
    string text3 = text.substr(i);
    cout << text3 << "\n\n";

    string password = "souls of mississippi";
    string enterCode;

    cout << "enter a password:";
    getline(cin, enterCode);
    // eger karsilastir dogru ise 0 degerini dondurur. (yani passwordlar esitse.)
    if(password.compare(enterCode) == 0)
        cout << "Password is correct\n";
    else    
        cout << "Password is incorrect\n";

    return 0;
}