#include <iostream>

using namespace std;

class car {
    public:
        string brand; // attirubute
        string model; 
        int year;
        // constructorslar hep vardir sadece ici bostur.
        car(string b, string m, int y) { // constructors
            brand = b;
            model = m;
            year = y;
            //cout << "wow\n";
        }
        void message() { // methods
            cout << "\nobp\n";
        }
        /* void mesaj(); */
        int speed(int mySpeed) { // methods
            return mySpeed * 2;
        }
        // veya method'u boylede yapabilirdik
};
    /* void :: mesaj() {
        cout << "sa \n";
    } */

int main() {
    car c1("skoda","superb",2001); // nesne olusturulken constructors calisir. (cagirilir)

    car c2("nissan", "juke", 2009);

    c1.message();

    cout << c1.brand << "\t" << c1.speed(70) << "\t";
    cout << c1.model << "\t";
    cout << c1.year << "\n";

    cout << c2.brand << "\t" << c2.speed(75) <<"\t";
    cout << c2.model << "\t";
    cout << c2.year << "\n";

    return 0;
}