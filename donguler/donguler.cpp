#include <iostream>

using namespace std;

int main() {
    // increase, increment
    int i = 1, number;
    cout << "tek sayi yazdirici\n"; 
    cout << "bir sayi girin:";
    cin >> number;
    
    while (i <= number) {
        cout << "\n" << i << "\n";
        i +=2;
    }
    return 0;
}