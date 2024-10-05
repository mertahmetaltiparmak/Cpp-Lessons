#include <iostream>
#include <string>

using namespace std;

int main() {
    string cars[5] = {"Volvo", "ford", "fiat", "porche", "nissan"};
    // c'deki gibi arrayler 0'dan basliyor.
    int myNumbers[5] = {5, 6, 8, 9, 13};

    // array'in ramde tuttugu ilk yerin adresini yazdirir.
    cout << myNumbers << "\n";
    // ilk array'in degerini verir bu ise
    cout << *myNumbers << "\n";

    for (int i = 0; i < 5; i++)
        cout << i + 1 << " = " << cars[i] << "\n";
    cout << "\n\n";
    // myNumbers'daki butun degerleri i'ye atacak. for each dongusu deniyormus buna
    for (int i:myNumbers)
        cout << i << "\n";

    return 0;
}