#include <iostream>

using namespace std;

class Father {
    public:
        void myMethod() {
            cout << "super\n";
        }
};
class Son {
    public:
        int number = 7;
        void myMethod2() {
            cout << "Hello c++";
        }
};
class Child:public Father, public Son {

};
int main() {
    Child myObj;

    myObj.myMethod();
    myObj.myMethod2();

    cout << myObj.number << "\n";


    return 0;
}