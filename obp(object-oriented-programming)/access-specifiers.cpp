#include <iostream>

using namespace std;

class myClass {
    // bu class'in disinda da icindekilere ulusmak icin public yazilir.
    public:
        void mesaj() {
            cout << "sa\n";
            // bu tarz ulasibiliriz veri guvenligi icin bunu kullaniyoruz.
            cout << "x = " << x << "\n";
        }
    // sadece bu class'in icinde ulasabiliriz.
    private:
        int x = 5;
        // private gibi ama miras alinirsa (inheritance) diger class'dan ulasilabilir.
    protected:
        int y = 9;
};
int main() {
    myClass myObj;


    return 0;
}