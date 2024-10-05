#include <iostream>
#include <string>

using namespace std;

int main() {
    string cars[4];
    // arraylere boyle deger'de atayabiliyoruz.
    cars[0] = "Tofas";
    cars[1] = "KIA";
    cars[2] = "BMW";
    cars[3] = "Ford";
    // yine for each dongusu
    for (string myCars:cars)
        cout << myCars << "\n"; 
    cout << "\n";

    int myNumbers[7] = {1, 2, 3, 4, 5, 6, 7};
    // sizeof numbers ile arrayin kapladigi alani elde ediyoruz onu sizeof int'e bolerek ise array'in kac elemanli oldugunu hesapliyoruz
    int getLenght = sizeof(myNumbers) / sizeof(int);
    cout << getLenght << "\n\n";

    for (int i = 0; i < getLenght; i++) 
        cout << myNumbers[i] << "\n";

    return 0;
}