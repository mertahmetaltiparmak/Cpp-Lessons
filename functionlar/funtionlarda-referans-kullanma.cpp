#include <iostream>

using namespace std;

void swapNumbers(int &x, int &y);

int main() {
    int numberOne = 5, numberTwo = 9;

    cout << "Before: " << numberOne << "  " << numberTwo << "\n";
    swapNumbers(numberOne, numberTwo);
    cout << "After: " << numberOne << "  " << numberTwo << "\n";

    return 0;
}
void swapNumbers(int &x, int &y) {
    int z = x;
    x = y;
    y = z;
}