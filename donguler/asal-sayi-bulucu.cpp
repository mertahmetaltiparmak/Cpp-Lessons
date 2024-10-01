#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int number, i, control = 1, result;

    cout << "enter a positive number:";
    cin >> number;
    if (number < 2) {
        cout << "\nplease enter a number greater then one\n";
        return 0;
    }
    // sayinin yarisini almak yerien ramde daha az kaplasin diye kokunu aliyoruz.
    // buyuk sayilarda sikinti oluyor for cok fazla calisip cok ram yiyor.
    result = sqrt(number);
    for (i = 2; i <= result; i++) {
        if (number % i == 0) {
            control = 2;
            break;
        }
    }
    if (control == 2) 
        cout << number << " is not a prime number\n";
    else 
        cout << number << " is a prime number\n";
    return 0;
}