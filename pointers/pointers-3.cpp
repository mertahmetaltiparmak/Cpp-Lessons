#include <iostream>

using namespace std;

int main() {
    int x = 6;
    int* ptr = &x;

    cout << "ptr:" << ptr << "\n";
    cout << "*ptr:" << *ptr << "\n";
    ptr++; // 4 byte
    cout << "ptr:" << ptr << "\n";
    cout << "*ptr:" << *ptr << "\n";
    ptr--;
    cout << "ptr:" << ptr << "\n";
    cout << "*ptr:" << *ptr << "\n";

    return 0;
}