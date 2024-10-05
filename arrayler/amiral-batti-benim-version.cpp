#include <iostream>
#include <time.h>

using namespace std;
int main() {
    bool ships[4][4] = {
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0}
    };
    int randomRow = 0, randomColumn = 0;
    for (int i = 1; i < 6; i++) {
        srand(time(NULL));
        randomRow = rand() % 4;
        randomColumn = rand() % 4;
        // if'siz halinde ise ayni degere atiyordu simdi ise calismiyor ??
        if (ships[randomRow][randomColumn] = 1) {
            i--;
        } else 
        ships[randomRow][randomColumn] = 1;
    }    
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