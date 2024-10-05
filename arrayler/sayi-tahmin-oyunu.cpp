#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main() {
    int randomNumber = 1, inputNumber = 0, guessCount = 0;
    srand(time(NULL));
    randomNumber = (rand() % 100) + 1;

    cout << "Bir sayi tuttum!\nTahmin et bakalim\n";

     do {
        cout << "Tahminini gir:";
        cin >> inputNumber;
        guessCount++;

        if (inputNumber < 1 || inputNumber > 100) 
            cout << "1 - 100 arasinda bir sayi giriniz!\n";
        if (inputNumber == randomNumber) {
            cout << "\ntebrikler dogru bildiniz!\n";
            break;
        }
        else if (inputNumber > randomNumber) {
            cout << "daha kucuk bir sayi giriniz.\n";
        } else if (inputNumber < randomNumber) {
            cout << "daha buyuk sayi giriniz:\n";
        }
     } while (true);
    cout << "";
    cout << "\n" << guessCount << " . seferde dogru bildiniz.\n";

    return 0;
}