#include <iostream>

using namespace std;

void replaceValue(int* ptr);

int main() {
    int x = 5;
    cout << "value of variable x is " << x << "\n";
    replaceValue(&x);
    cout << "value of variable x after the function is " << x << "\n";

    return 0;
}
void replaceValue(int* ptr) {
    *ptr = 9;
    cout << "value of variable x inside the function is " << *ptr << "\n";
}