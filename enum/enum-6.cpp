#include <iostream>

using namespace std;

enum fuel {
    gas = 5,
    diesel,
    lpg,
    hybrid,
    electric
};
struct car {
    string color;
    int price;
    // enum'i bunun icinde tanimladik
    fuel f;
};
int main() {
    car c;
    c.f = hybrid;
    cout << c.f << "\n";

    return 0;
}