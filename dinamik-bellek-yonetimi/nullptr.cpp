#include <iostream>

using namespace std;

int main() {
    // nesneyi burada olusturmak yerien null yaptik ve istedigimiz yerede olusturup istedigimiz degeri atayabilicegiz.
    // int turunde bir isaretci x tanimliyoruz ve baslangicta null olarak ayarliyoruz.
    int* x = nullptr;
    x = new int;
    *x = 9;

    cout << *x << "\n";
    delete x; // dinamik olarak ayirdigimiz bellegi serbest birakiyoruz.

    return 0;
}