#include <iostream>

using namespace std;
// base class
class animal {
    public:
        void animalSound() {
            cout << "This animal makes a sound\n";
        }
};
// derived class
class cat:public animal {
    public:
        void animalSound() {
            cout << "This cat says: meow\n";
        }
};
class dog:public animal {
    public:
        void animalSound() {
            cout << "This dog says: hav\n";
        }
};
// ayni 
int main() {
    // polymorphism
    animal a1;
    cat c1;
    dog d1;

    a1.animalSound();
    c1.animalSound();
    d1.animalSound();

    return 0;
}