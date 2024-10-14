#include <iostream>

using namespace std;

class Vehicle {
    // protected olunca baska bi class'ta kullanabiliriz ama main icinde kullanamayiz.
    // tabi ki miras aldigimiz class anlamina geliyor bu da 
    protected:
        int number = 9;
    public:
        string brand = "skoda\n";
        void message() {
            cout << "My car is \n";
        }
        void mesaj() {
            cout << "sa\n";
        }
};
// miras aldigi icin aslinda vehicle ici bos (ben oyle anladim.)
// vehicle'daki protected ve public olan mehod ve attribute'leri miras aldi artik car altinda onlari kullanabiliriz.
// private'lar miras alinamaz.
class car:public Vehicle {
    public:
        string model = "Octavia";
        void message2() {
            cout << number << "\n";
        }
};
int main() {
    car myObj;

    myObj.message2();
    myObj.mesaj();
    myObj.message();

    cout << myObj.brand+" "+myObj.model << "\n";

    return 0;
}