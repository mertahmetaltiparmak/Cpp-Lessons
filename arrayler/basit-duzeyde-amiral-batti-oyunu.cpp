#include <iostream>

using namespace std;
// TODO : nevermind
int main() {
    bool ships[4][4] = {
        {0,0,1,0},
        {1,0,0,0},
        {0,0,0,1},
        {0,1,0,0}
    };
    int hits = 0, numberOfTurns = 0;
    int row, column;
    while (hits < 4) {
        cout << "Koordinatlar (0 dahil) [3] [3] arasinda secebilirsiniz.\n";
        cout << "Satir sayisini secin:";
        cin >> row;
        cout << "Sutun sayisini secin:";
        cin >> column;
        if (ships[row][column]) {
            ships[row][column] = 0;
            hits++;
            cout << "\nVurdunuz! " << (4-hits) << " Gemi kaldi\n\n"; 
        } else {
            cout << "Iskaladiniz!\n\n";
        }
        numberOfTurns++;
    }
    cout << "Zafer!\n";
    cout << numberOfTurns << " . Turda kazandiniz.\n";

    return 0;
}