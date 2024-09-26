#include <iostream>

using namespace std;

// dairenin alani PI*r*r
// dairenin cevresi PI*2*r

int main() {
    int r = 0;
    float alan = 0, cevre = 0;
    const float PI = 3.14;
    
    cout << "Dairenin yaricapini girin:";
    cin >> r;

    alan = PI * r * r;
    cevre = 2 * PI * r;

    cout << "\nDairenin alani:"<< alan << "\nDairenin cevresi:" << cevre << "\n";
    

    return 0;
}