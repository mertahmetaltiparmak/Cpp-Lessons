#include <iostream>

using namespace std;

int main() {
    int i, j, size;

    cout << "Matris karesinin boyutunu giriniz:";
    cin >> size;
    int matrix[size][size];
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            matrix[i][j] = 0;
        }
    }
    for (i = 0; i < size; i++) {
        // major kosegenler icin bu 
        matrix[i][i] = 1;
        // minor icin
        matrix[i] [size - i - 1] = 1;
    }
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    return 0;
}