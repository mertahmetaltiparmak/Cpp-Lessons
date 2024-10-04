#include <iostream>
#include <string>

using namespace std;

int main() {
/*     string txt, txt2, txt3;
    txt = "to be question";
    txt2 = "the ";
    txt3 = "or not to be";
    // 6. karaktere txt2'yi ekleyecek.
    txt.insert(6, txt2);
    // to be the question yazdiracak.
    cout << txt << "\n";
    // 6.karaktere txt3'teki 3.karakterden 4 karakter yazdiracak yani araya not gelecek
    txt.insert(6, txt3, 3, 4);
    // cikti: to be not the question
    cout << txt << "\n";
    // 10. karaktere asagidaki cumleden 8 karakter ekleyecek.
    //txt.insert(10, "that is good" ,8);
    // cikti: to be not that is the question
    //cout << txt << "\n";
    // 10 karaktere to be cumlesinin tamanini ekliyecek
    //txt.insert(10, "to be");
    //cout << txt << "\n";
    // 6. karakterin oldugu yere 2 tane : ekleyecek
    txt.insert(6, 2, ':');
    cout << txt << "\n";
    // sonuna 3 tane . ekleyecek
    txt.insert(txt.end(), 3, '.');
    cout << txt << "\n";
 */
    string buyer, seller;
    buyer = "money";
    seller = "goods";

    cout << "before the swap buyer has " << buyer;
    cout << " and seller has " << seller << "\n";
    // veya seller.swap(buyer); 'da yapabiliyoruz. 
    swap(buyer,seller);

    cout << "after the swap buyer has " << buyer;
    cout << " and seller has " << seller << "\n\n";

    string txt = "Hello C+++";
    // pop_back sondaki bir karakteri siliyor.
    txt.pop_back();
    cout << txt << "\n";

    return 0;
}