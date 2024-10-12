#include <iostream>

using namespace std;

void myArray(int*, int);

int main() {
    int numbers[5] = {1, 3, 5, 7 ,9};
    int arraySize = sizeof(numbers) / sizeof(int) ;

    cout << "Previous\n";
    cout << "--------\n";
    for (int i = 0; i < arraySize; i++) {
        cout << "numbers[" << i << "]=" << *(numbers + i) << "\n";
    }
    myArray(numbers, arraySize);
    cout << "\nNext\n";
    cout << "-----\n";
    for (int i = 0; i < arraySize; i++) {
        cout << "numbers[" << i << "]=" << *(numbers + i) << "\n";
    }
    return 0;
}
void myArray(int* numbers, int mySize) {
    for (int i = 0; i < mySize; i++) {
        *(numbers + i) *= 5;
    }
}