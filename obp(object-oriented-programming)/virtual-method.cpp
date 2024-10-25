#include <iostream>

using namespace std;
// alt siniflarin ust siniftaki sanal methodlari gecersiz kilmasini saglar
class animal {
    public:
    // boyle sanal method olusturdugumuzda pointer olan nesnemize atilan obj kullanabilicek.
        virtual void sound() {
            cout << "animal sound...";
        }
};
class cat:public animal {
    public:
        void sound() {
            cout << "cat says: meow...\n";
        }
};
class dog:public animal {
    public:
        void sound() {
            cout << "dog says: hav...\n";
        }
};
class sheep:public animal {
    public:
        void sound() {
            cout << "sheep says: mee....\n";
        }
};
void animalSound(animal* ptr) {
    // hangi sesin cikacigini nesnenin tipine gore belirler.
    ptr -> sound();
}
int main() {
    cat kedy;
    dog dg;
    sheep sp;

    animalSound(&kedy); // meow yazdirir.
    animalSound(&dg); // hav yazdirir.
    animalSound(&sp); // mee yazdirir.

    return 0;
}