#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main() {
    int dice, myNumbers[7] = {0, 0, 0, 0, 0, 0, 0};
    srand(time(NULL));
    for (int i = 1; i <= 100; i++) {
        dice = rand() % 6 + 1;
        myNumbers[dice]++;
    }
    cout << "Dice number\tHow many times\n";
    for (int j = 1; j < 7; j++) {
        cout << j << "\t\t" << myNumbers[j] << "\n";
    }

    return 0;
}