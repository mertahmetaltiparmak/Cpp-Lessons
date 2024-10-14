#include <iostream>

using namespace std;

class myClass {
    public:
    int x = 7;
    int y = 18;
    myClass() { // constructor objenin olusturuldugunda cagirilir. parametre alabilir
        cout << "Everything just begun." << "\n";
    }
    ~myClass() { // destructor nesne yok edildiginde cagirilir yapilacak seyi yapar. parametre alamaz
        cout << "Everything ends..." << "\n";
    }
};
int main() {
    myClass myObj;

    cout << myObj.x << "\n";
    cout << "sa" << "\n";

    return 0;
}