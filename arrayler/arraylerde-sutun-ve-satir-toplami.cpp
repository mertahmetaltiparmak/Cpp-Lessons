#include <iostream>

using namespace std;

int main() {
    int matrix[5][5] = {
        {5, 6, 7, 8, 9},
        {4, 6, 8, 9, 1},
        {2, 1, 6, 8, 4},
        {4, 5, 7, 2, 0},
        {1, 7, 9, 5, 5}
    };
    int i, j, sum = 0;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
    // 0 0 0 1 diye giderek satilari topluyor i sabit tuttup ilk j'yi artiyor.
    for (i = 0; i < 5; i++) {
        cout << i << " .satirin toplami: ";
        for (j = 0; j < 5; j++) {
            sum += matrix[i][j];
        }
        cout << sum << "\n";
        sum = 0;
    }
    // gg
    cout << "\n";
    // 0 0  1 0  2 0 diyerek sutunlari topluyor.
    for (j = 0; j < 5; j++) {
        cout << j << " .sutunun toplami: ";
        for (i = 0; i < 5; i++) {
            sum += matrix[i][j];
        }
        cout << sum << "\n";
        sum = 0;
    }

    return 0;
}