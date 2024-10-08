#include <iostream>

using namespace std;

int main() {
    int result[50][50];
    int i, j, k, sum = 0;
    int xrows, xcolumns, yrows, ycolumns;

    cout << "Enter row and columns for x matrix:";
    cin >> xrows >> xcolumns;
    int x[xrows][xcolumns];
    cout << "Enter the values of the matrix\n";
    for (i = 0; i < xrows; i++) {
            for (j = 0; j < xcolumns; j++) {
                cout << "x [" << i << "] [" << j << "]=";
                cin >> x[i][j];
            }
    }
    cout << "Enter row and columns for y matrix:";
    cin >> yrows >> ycolumns;
    int y[yrows][ycolumns];
    if (yrows != xcolumns) {
        cout << "these matrix cannot multiplied\n";
    } else {   
        cout << "Enter the values of the matrix\n";
        for (i = 0; i < yrows; i++) {
                for (j = 0; j < ycolumns; j++) {
                    cout << "y [" << i << "] [" << j << "]=";
                    cin >> y[i][j];
                }
        }
        cout << "\n";
        for (i = 0; i < xrows; i++) {
            for (j = 0; j < ycolumns; j++) {
                for (k = 0; k < yrows; k++) {
                    sum += x[i] [k] * y[k] [j];
                }
                result[i][j] = sum;
                sum = 0;
            }
        }
        cout << "Result\n";
        for (i = 0; i < xrows; i++) {
            for (j = 0; j < ycolumns; j++) {
                    cout << result[i][j] << " ";
            }
            cout << "\n\n";
        }
    }

    return 0;
}