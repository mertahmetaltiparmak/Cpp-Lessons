#include <iostream>

using namespace std;
/* Stack, yerel değişkenler, fonksiyon argümanları ve kontrol bilgileri gibi verileri tutar.  
*  Heap ise büyük veri yapıları ve dinamik ömürlü nesneleri saklar.
*  Stack ve heap, RAM belleğinde bulunur. Fark, erişim ve boyutlarındadır.
*/
int main() {
    // eger boyle belirlessek program kapatilana kadar bunu ram'de tutacak 
    // ve bizim kontrolumuzde olmuyacak bellek yonetimi

    // int x = 7; // stack

    // ama eger boyle yaparsak ramde int boyutunda yer ayrilir ve program kapanmadan delete gordugunde rami bosatacak.
    int* x = new int; // heap
    *x = 9;
    cout << *x << "\n";
    // delete en son degilde cout'dan once yaparsak bu sefer o alanda tutulmus rastgele degeri yazar.
    delete x;

    return 0;
}