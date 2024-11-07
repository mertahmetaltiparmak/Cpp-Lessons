#include <iostream>

using namespace std;

enum fuel {
    gas,
    diesel,
    lpg,
    hybrid,
    electric
};
int main() {
    fuel f;
    f = fuel::gas;
    if (f == fuel::gas) {
        cout << "Gas\n";
    } else if (f == fuel::diesel)
        cout << "Diesel\n";

    return 0;
}