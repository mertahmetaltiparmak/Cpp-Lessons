#include <iostream>
#include <string>

using namespace std;

int main() {
    string txt1, txt2, txt3, largest;
    txt1 = "atrawberry";
    txt2 = "star";
    txt3 = "staz";
    /* largest'i atarken ascii karakterine gore atiyor mesela sz var bide sarar var sz'deki 
     *z ile a'yi kiyaslarken alfabenin sonunda z oldugu icin onu uzun kabul ediyor */
    if ((txt1 > txt2) && (txt1 > txt3)) {
        largest = txt1;
    } else if ((txt2 > txt1) && (txt2 > txt3)) {
        largest = txt2;
    } else {
        largest = txt3;
    }
    cout << "largest: " << largest << "\n"; 

    string exp (5, 'K');
    // 5 kez k yazdiracak
    cout << exp << "\n";

    return 0;
}