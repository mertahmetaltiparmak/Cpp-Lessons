#include <iostream>

using namespace std;

class employee {
    public:
        // static attribute
        static int workers;
        // her obje olusturdugumuzda workers + 1 olacak
        employee() {
            workers++;
        }
};
// static bir attribute boyle deger atayabiliriz.
int employee::workers = 0;

int main() {
    // 3 kez constructor caliscak yani workers degeri 3'e esit olacak.
    employee em1, em2, em3;
    // ayni zamanda boyle de static bir attribute ulasabiliriz.
    cout << "Number of workers: " << employee::workers << "\n";

    return 0;
}
