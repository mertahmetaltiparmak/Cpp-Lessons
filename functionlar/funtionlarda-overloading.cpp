#include <iostream>

using namespace std;

int sum(int, int);
double sum(double, double);

int main() {
    // overloading farkli tur olmak sarti ile ayni isim olabilir ondalili girince zaten hangisini kullanacaginiz anliyor.
    int x = sum(5, 9);
    double y = sum(14.5, 12.1);

    cout << "int: "<< x << "\n";
    cout << "double: " << y << "\n";

    return 0;
}
int sum(int x, int y) {
    return x + y;
}
double sum(double x, double y) {
    return x + y;
}