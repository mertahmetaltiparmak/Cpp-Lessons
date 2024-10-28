#include <iostream>

using namespace std;
/* dangling pointer
 * bir isaretcinin isaret ettigi bellegin serbest birakilmasindan sonra o bellek alanina erismeye calismasi durumudur. 
 * Bu durum bellek hatalarina ve programin beklenmedik sekilde davranmasina neden olabilir. 
 */
int main() {
    int *x = new int;

    *x = 9;
    int * y = x; // dangling
    delete x; // x isaretcisinin isaret ettigi bellegi serbest birakiyoruz.
    cout << *y << "\n";  // Burada y ile erisim saglamaya çalisiyoruz, ama x'in serbest biraktigi bellek artik gecersiz.
    delete y; // y'yi de serbest birakmaya calisiyoruz, ancak bu durum tanımsiz bir davranısa neden olur.

    return 0;
}