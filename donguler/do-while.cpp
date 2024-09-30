#include <iostream>

using namespace std;

int main() {
    int i = 1, number;
    do {
        cout << "Enter a number:";
        cin >> number;
        while (i <= number) {
            cout << i << "   ";
            i++;
        }
    } while (number >= 1 && number <= 50);

    return 0;
}