#include <iostream>

using namespace std;

class vehicle {
    public:
        double speed;
        int wheels;
        void go() {
            cout << "This vehicle is moving\n";
        }
        void stop() {
            cout << "This vehicle is stopped\n";
        }
};
class car:public vehicle {
    public:
        int door = 4;
};
class bicycle:public vehicle {
    public:
        int pedals = 2;
};
class bus:public vehicle {
    public:
        int seat = 50;
};
int main() {
    bus b1;
    b1.speed = 75.5;
    b1.seat;
    b1.go();
    cout << "Bus speed:" << b1.speed << "\n";
    cout << "Bus seats:" << b1.seat << "\n";
    b1.stop();
    cout << "\n";

    car c1;
    c1.door = 4;
    c1.speed = 86.7;
    c1.go();
    cout << "Car doors:" << c1.door << "\n";
    cout << "Car speed:" << c1.speed << "\n";
    c1.stop();
    
    return 0;
}