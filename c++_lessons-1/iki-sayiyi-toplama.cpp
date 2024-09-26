#include <iostream>

using namespace std;

int main() {
    int numberOne, numberTwo, result = 0;

    cout << "birinci sayiyi girin:";
    cin >> numberOne;
    cout << "\nIkinci sayiyi girin:";
    cin >> numberTwo;

    // veya cin >> numberOne >> numberTwo; diye de alabilirdik ama hos gozukmezdi terminalde
    // aritmetik operatorler c ile ayni

    result = numberOne + numberTwo;

    cout << "\nSonuc:" << result << "\n"; 

    int x = 5;
    ++x; // 6
    cout << "x:" << x++ << "\n"; // 6
    cout << "x:" << x << "\n"; // 7
    cout << "x:" << ++x << "\n"; // 8
    cout << "x:" << x++ << "\n"; // 8
    cout << "x:" << x << "\n"; // 9
    // c'deki mantik sag ve solda olmasi fark ediyour ve mantigi tamamen ayni

    system("pause");
    return 0;
}