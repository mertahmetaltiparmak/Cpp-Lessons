#include <iostream>

using namespace std;

class animal {
    public:
    void eat() {
        cout << "This animal is eating\n";
    }
    void sleep() {
        cout << "This animal is sleeping\n";
    }
};
class fish:public animal {
    public:
    void swim() {
        cout << "Fish is swimming\n\n";
    }
};
class bird:public animal {
    public:
    void fly() {
        cout << "Bird is flying\n";
    }
};
class rabbit:public animal {
    public:
    void run() {
        cout << "Rabbit is running";
    }
};
int main() {
    fish obj;
    obj.eat();
    obj.sleep();
    obj.swim();

    bird obj2;
    obj2.eat();
    obj2.sleep();
    obj2.fly();

    return 0;
}