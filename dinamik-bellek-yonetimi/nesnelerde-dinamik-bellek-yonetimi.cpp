#include <iostream>

using namespace std;

class employee {
    public:
        // constructor nesne olusunca mesaji vericek.
        employee() {
            cout << "Started\n";
        }
        // destructor nesne silindiginde olusucak mesaji veriyor.
        ~employee() {
            cout << "Deleted\n";
        }
};
int main() {
    // boyle olusturursak destructor otomatik calismaz ve kendimiz elle silmeliyiz
    // boyle olusturunca dinamik bellek kullanimina girdigi icin elle olusturdugummuz gibi ellede silmeliyiz.
    // silmezsek aksi takdirde bellek sizintisi(memory leak) meydana gelebilir.
    employee* em = new employee; // heap
    
    cout << "hello dynamic memory\n";

    delete em; 

    // boyle yaparsak program bittiginde otomatik destructor calisacak.
    /* employee em;
    
    cout << "hello dynamic memory\n";
 */
    return 0;
}