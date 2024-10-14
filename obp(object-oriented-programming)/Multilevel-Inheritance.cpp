#include <iostream>

using namespace std;

class Father {
    public:
        void myMethod() {
            cout << "Sa turk var mi\n";
        }
};
class Son:public Father {
    protected:
        int number = 5;
}; 
class GrandChild:public Son {
    // hala private erisemiyoruz.
    private:
        string name = "Mert";
    public:
        int getValue() {
            return number;
        }
};
int main() {
    GrandChild myObj;

    myObj.myMethod();
    cout << myObj.getValue() << "\n";

    return 0;
}