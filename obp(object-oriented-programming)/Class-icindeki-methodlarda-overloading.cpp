#include <iostream>

using namespace std;

class overloading {
    public:
        void print(int valueInt) {
            cout << "Printing int:" << valueInt << "\n";
        }
        void print(double valueDouble) {
            cout << "Printing double:" << valueDouble << "\n";
        }
        void print(string valueString) {
            cout << "Printing string:" << valueString << "\n";
        }
};
int main() {
    overloading ov;
    ov.print(7);
    ov.print(157.5);
    ov.print("Mert");

    return 0;
}