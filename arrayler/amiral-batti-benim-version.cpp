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
    cout << "Gemiler hazilaniyor...";
    for (int i = 1; i < 6; i++) {
        srand(time(NULL));
        _sleep(1000);
        randomRow = rand() % 4;
        _sleep(1000);
        randomColumn = rand() % 4;
        _sleep(1000);
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
            cout << "\nVurdunuz! ";
            _sleep(1500); 
            cout << (4-hits) << " Gemi kaldi\n\n"; 
            _sleep(1000);
        } else {
            cout << "Iskaladiniz!\n\n";
            _sleep(1500);
        }
        numberOfTurns++;
    }
    cout << "Zafer!\n";
    _sleep(1500);
    cout << numberOfTurns << " . Turda kazandiniz.\n";

    return 0;
}