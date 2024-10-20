#include <iostream>

using namespace std;

class employee {
    public:
        // static method
        static void showInfo(string n, int s) {
            cout << "Name of the worker: " << n << "\n";
            cout << "Salary of the worker: " << s << "\n";
        }

};
int main() {
    // static methodlari object olusturmadan boyle'de kullabiliriz.
    employee::showInfo("Mert", 15000);

    return 0;
}