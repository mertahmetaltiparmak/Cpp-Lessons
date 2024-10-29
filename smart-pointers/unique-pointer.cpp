#include <iostream>
// unique ptr bu kutuphaneden cagiriyoruz.
#include <memory>
using namespace std;
/* unique_ptr Ozellikleri ve Avantajlari
 * Otomatik Bellek Yonetimi: unique_ptr, kapsami sona erdiginde otomatik olarak bellegi serbest bırakir. 
 * Bu, programcilarin bellek yönetimiyle ilgili endiselerini azaltir.
 *
 * Sahiplik Semantigi: Bir unique_ptr, yalnizca bir nesneye sahip olabilir.
 * Bu, bellek yönetimini daha guvenilir hale getirir, cunku bir nesnenin birden fazla isaretcisi olamaz.
 *
 * Tasınabilirlik: unique_ptr, move() ile tasinabilir. Bu sayede sahiplik baska bir unique_ptr nesnesine devredilebilir.
 *
 * Ozel Degiskenler: unique_ptr, belirli turde nesneler olusturmak icin kullanilabilir.
 * Ornegin, unique_ptr<MyClass> seklinde kendi siniflarinizi yönetmek icin de kullanabilirsiniz. 
 *
 * Daha Guvenli Kod: unique_ptr kullanarak bellek sizintilarini ve yanlis bellek erisimlerini azaltabilirsiniz,
 * bu da daha guvenli ve surdurulebilir bir kod yazmaniza yardimci olur.
 */
int main() {
    // make_unique pointer'imize dinamik bir alan tahsil eder.
    unique_ptr<int> uqPtr = make_unique<int>(7);
    cout << "Value: " << *uqPtr << "\n";

    return 0;
}