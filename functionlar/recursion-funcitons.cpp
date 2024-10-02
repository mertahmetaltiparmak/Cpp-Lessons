#include <iostream>

using namespace std;

int sum(int);

int main() {
    int number, result;

    cout << "Bir sayi giriniz:";
    cin >> number;
    
    result = sum(number);
    cout << "\nSonuc:" << result;

    return 0;
}
// aslinda (n + (n + 1)) / 2 yaptik
int sum(int x) {
    if (x > 0) {
        // 9 yazdik x 9 oldu sum 8 caldi ve yineledi recursion function oldu yani
        return x + sum(x - 1);
    }
    else 
        // sifira geldiginde kirip cikacak anlamina gelir.
        return 0;
}