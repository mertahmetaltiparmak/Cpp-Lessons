#include <iostream>

using namespace std;
// belki bir gun ise yarar.
int main() {
    int matrix[3] [4], i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            matrix[i] [j] = i + j;
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            cout << matrix[i] [j] << " ";
        }
        cout << "\n";
    }

    return 0;
}