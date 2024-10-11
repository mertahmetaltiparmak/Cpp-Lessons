#include <iostream>

using namespace std;

int multiplication(int x, int y) {
    return x * y;
}
int addition(int x, int y) {
    return x + y;
}

int main() {
    int (*funct) (int, int);
    funct = multiplication;
    cout << "x * y = " << funct(7, 7) << "\n";
    funct = &addition;
    cout << "x + y = " << (*funct) (7, 7) << "\n";

    return 0;
}