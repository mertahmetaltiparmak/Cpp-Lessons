#include <iostream>

using namespace std;

template <class t>

class employee {
    public:
        t myVariable;
        employee(t x) {
            myVariable = x;
        }
};
int main() {
    employee <int> myObj(5);
    employee <char> myObj2('M');
    employee <double> myObj3(5.19);

    cout << myObj.myVariable << "\n";
    cout << myObj2.myVariable << "\n";
    cout << myObj3.myVariable << "\n";

    return 0;
}