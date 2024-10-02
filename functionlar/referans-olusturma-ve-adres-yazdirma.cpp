#include <iostream>

using namespace std;

int main() {
    string food = "Doner";
    // food'un icindeki degeri meal atamis olduk.
    string &meal = food;

    cout << food << "\n";
    cout << meal << "\n";
    // food'un tuttugu variable'in adresini yazdirmis oluyoruz  
    cout << &food << "\n";

    return 0;
}