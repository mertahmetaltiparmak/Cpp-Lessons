#include <iostream>

using namespace std;

float getSquare(float* ptr);

int main() {
    float number;
    cout << "bir sayi giriniz:";
    cin >> number;
    cout << "sayinin karesi: " << getSquare(&number) << "\n";

    return 0;
}
float getSquare(float* ptr) {
    return *ptr * *ptr;
}