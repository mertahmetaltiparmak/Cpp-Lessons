#include <iostream>

using namespace std;

int main() {
    int sizeArr;
    cout << "Enter the size:";
    cin >> sizeArr;
    //nesne olusturduk ?
    int* myArray = new int[sizeArr];

    for (int i = 0; i < sizeArr; i++) {
        cout << "myArray[" << i << "]=";
        cin >> myArray[i];
    }
    for (int i = 0; i < sizeArr; i++) {
        cout << *(myArray + i) << " ";
    }
    delete[]myArray;
    myArray = NULL;

    return 0;
}