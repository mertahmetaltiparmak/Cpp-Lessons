#include <iostream>

using namespace std;

int main() {
    int i = 1; /*
    for (i = 1; i <= 10; i++) {
        if (i == 5)
            break;
        cout << i << "  ";
     }*/
   /*  while (i < 10) {
        cout << i << " ";
        i++;
        if (i == 6)
            break;
    } */
    for (i = 1; i <= 10; i++) {
        // 5'i yazdirmiyor cunku komutun dongunun basina atiyor contunie ile
        // while dada ayni
        if (i == 5)
            continue;
        cout << i << "  ";
     }
    return 0;
}