#include <iostream>

using namespace std;

int main() {
    int number;
    string result;

    cout << "Bir sayi giriniz:";
    cin >> number;
    // ? = if demektir kısa gosterimidir : = else demektir yine kisa gosterimidir. c ile kullanimi aynidir.
    result = (number > 0)? "sayi pozitif" : "sayi negatif";
    cout << "\n" << result;

    return 0;
}