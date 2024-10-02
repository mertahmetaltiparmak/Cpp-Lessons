#include <iostream>

using namespace std;

int factorail(int);

int main() {
    int number, result = 0;

    cout << "Faktoriyelini almak istediginiz sayiyi giriniz:";
    cin >> number;

    result = factorail(number);
    cout << number << " != " << factorail(number) << "\n\n";

    return 0;
}
int factorail(int x) {
    if (x == 0) {
        return 1;
    } else {
        return x * factorail(x - 1);
    }
}