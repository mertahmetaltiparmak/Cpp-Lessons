#include <iostream>

using namespace std;

class myMath {
    int* number1 = nullptr;
    int* number2 = nullptr;
    public:
        myMath(int x, int y) {
            number1 = new int;
            number2 = new int;
            *number1 = x;
            *number2 = y;
            cout << *number1 + *number2 << "\n";
        }
        ~myMath() {
            // ga
            delete number1;
            delete number2;
            cout << "Successful\n";
        }
};
int main() {
    myMath* ptr = new myMath(7,19);
    // ptr kullanildiktan sonra delete ile silinmezse bellek sizintisi olur.
    delete ptr; //myMath nesnesinin yikicisini çagirir, bellegi serbest birakir

    return 0;
}