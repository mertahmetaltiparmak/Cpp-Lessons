#include <iostream>

using namespace std;

int main() {
    int option, numberOne = 0, numberTwo = 0, result = 0;

    cout << "1 - Toplama\n2 - Cikarma\n3 - Carpma\n4 - Bolme\nYapmak istediginiz islemi girin:";
    cin >> option;

    switch (option) {
        case 1:
            cout << "\nbirinci sayiyi girin:";
            cin >> numberOne;
            cout << "\nikinci sayiyi girin:";
            cin >> numberTwo;

            result = numberOne + numberTwo;
            cout << "\nSonuc:" << result << "\n";

            break;
        case 2:
            cout << "\nbirinci sayiyi girin:";
            cin >> numberOne;
            cout << "\nikinci sayiyi girin:";
            cin >> numberTwo;

            result = numberOne - numberTwo;
            cout << "\nSonuc:" << result << "\n";

            break;
        case 3:
            cout << "\nbirinci sayiyi girin:";
            cin >> numberOne;
            cout << "\nikinci sayiyi girin:";
            cin >> numberTwo;

            result = numberOne * numberTwo;
            cout << "\nSonuc:" << result << "\n";

            break;
        case 4:
            cout << "\nbirinci sayiyi girin:";
            cin >> numberOne;
            cout << "\nikinci sayiyi girin:";
            cin >> numberTwo;

            result = numberOne / numberTwo;
            cout << "\nSonuc:" << result << "\n";

            break;
        default:
            cout << "gecersiz deger!";
            break;;
    }

    system("pause");
    return 0;
}