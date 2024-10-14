#include <iostream> 

using namespace std;
// Encapsulation icin kendim bir ornek gordum onun denemesi.
class passwords {
    private:
        string password = "mert123";
    public:
        string passwrd;
        void check(string passwrd) {
            if (password == passwrd)
                cout << "Dogru sifre. Hos geldiniz" << "\n";
            else 
                cout << "Yanlis sifre\n";
        }
};
int main() {
    passwords p1;
    cout << "sifrenizi giriniz:";
    cin >> p1.passwrd;

    p1.check(p1.passwrd);

    return 0;
}