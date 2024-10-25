#include <iostream>

using namespace std;
// birden fazla ayni variable belirleyip onlari cagirmamizi saglar.
// declaration'i boyle
namespace programmer1 {
    int x = 11;
    void myFunction() {
        int x = 27;
        cout << "x: " << x << "\n";
    }
    class animal {
        public:
            int y = 15;
    };
}
// birden fazla kisi ayni isimle variable ile calismasini saglar
// isim cakismalarini engeller
namespace programmer2 {
    int x = 5;
    void myFunction() {
        int x = 7;
        cout << "x: " << x << "\n";
    }
    class animal {
        public:
            int y = 19;
    };
}
// boyle ise asagidaki gibi basina programmer yazmaktan kurtuluruz.
using namespace programmer2;

int main() {
    // x'lerin hepsi programmer2'nin cunku using namespace kullandik
    cout << "x: " << x << "\n";
    // programmer'lari cagirken kullandigimiz yazim kurali budur ve o kurali ayni std gibi kirmak icin using namespace kullanilir.
    cout << "x: " << programmer1::x << "\n";
    programmer1::myFunction();
    programmer1::animal an;
    cout << "y: " << an.y << "\n\n";
    
    cout << "x: " << x << "\n";
    myFunction();
    animal an2;
    cout << "y: " << an2.y << "\n";

    return 0;
}