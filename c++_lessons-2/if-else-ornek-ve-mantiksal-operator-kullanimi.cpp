#include <iostream>

using namespace std;

int main() {
    int score = 0;

    cout << "Aldiginiz notu giriniz:";
    cin >> score;

    if (score < 60 && score > 0) {
        cout << "\nVize'yi gecemediniz.\n";
    } else if (score < 0 || score > 100) {
        cout << "\nBunu nasil becerdin ?\n";
    } else {
        cout << "\nVizeleri gectiniz\n";
    }
   return 0;
}