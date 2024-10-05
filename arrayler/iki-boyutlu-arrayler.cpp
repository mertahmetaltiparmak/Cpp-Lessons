#include <iostream>

using namespace std;

int main() {
    // arraylerde yine sifirdan basliyor yani ilk karakterin tutuldugu yer [0] [0]'dir.
    string letters[2] [3] = {
        {"A", "B", "C"},
        {"D", "E", "F"}
    };
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
        cout << letters[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}