#include <iostream>

using namespace std;

int main() {
    char letter;

    cout << "Bir harf girin:";
    cin >> letter;

    if ((letter >= 'A') && (letter <= 'Z')) {
        cout << "\nbu bir harfdir.\n";
    } else if (letter >= 'a' && letter <= 'z') {
        cout << "\nbu bir harfdir.\n";
    } else {
        cout << "\nbu bir harf degildir.";
    }
    return 0;
}