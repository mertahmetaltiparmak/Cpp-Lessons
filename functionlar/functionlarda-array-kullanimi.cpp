#include <iostream>

using namespace std;

void myArray(int myNumbers[6]);

int main() {
    int myNumbers[6] = {1, 2, 3, 4, 5, 6};
    myArray(myNumbers);

    return 0;
}
void myArray(int myNumbers[6]) { 
    for (int i = 0; i < 6; i++) {
        cout << myNumbers[i] << " "; 
    }
    cout << "\n";
}