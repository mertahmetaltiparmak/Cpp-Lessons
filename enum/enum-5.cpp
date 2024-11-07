#include <iostream>

using namespace std;

enum fuel {
    gas = 1,
    diesel,
    lpg,
    hybrid,
    electric
};
int main() {
    // i'yi gas yani 1'e esitledik sonrada enumlardaki son enuma kadar donguye sokup birer birer arttirdik.
    for (int i = fuel::gas; i <= fuel:: electric; i++) {
        cout << i << " - Hello C++ Enum\n";
    }

    return 0;
}