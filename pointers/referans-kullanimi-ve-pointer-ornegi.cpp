#include <iostream>
#include <string>

using namespace std;

int main() {
    // referans kullanimi
    int z = 7;
    int& y = z;
    z = 9;
    cout << z << "\n";
    cout << y << "\n\n";

    int x = 9;
    int* ptr = &x;

    cout << "x degeri " << x << "\n";
    cout << "x'in adresi " << &x << "\n";
    cout << "ptr'nin degeri " << ptr << "\n";
    cout << "ptr'nin adresi " << &ptr << "\n";
    cout << "ptr'nin adreste tuttugu degeri " << *ptr << "\n";

    return 0;
}