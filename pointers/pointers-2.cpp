#include <iostream>

using namespace std;

int main() {
    double x = 3.14;
    double* y = &x;
    double* z = &x;

    cout << "x'in adresi " << &x << "\n";
    cout << "y'in adresi " << &y << "\n";
    cout << "z'in adresi " << &z << "\n\n";
    
    cout << "x'in degeri " << x << "\n";
    cout << "y'in degeri " << y << "\n";
    cout << "z'in degeri " << z << "\n\n";
    // pointerlerda degeri boyle gunceleyebiliriz.
    *y = 5.55;
    cout << "x'in degeri " << x << "\n";
    cout << "y'in degeri " << *y << "\n";
    cout << "z'in degeri " << *z << "\n";

    return 0;
}