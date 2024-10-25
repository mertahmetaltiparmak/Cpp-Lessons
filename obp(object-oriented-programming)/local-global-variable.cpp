#include <iostream>

using namespace std;

int x = 10; // global

void myFunction() {
    int x = 7; // local
    cout << "x: " << x << "\n";
}
int main() {
    int x = 19; // local
    cout << "x: " << x << "\n"; // 19
    myFunction(); // 7
    cout << "x: " << x << "\n"; // 19

    return 0;
}