#include <iostream>

using namespace std;

enum days {
    monday, // 0
    tuesday, // 1
    wednesday, // 2
    thursday, // 3
    friday, // 4
    saturday, // 5
    sunday // 6
};

int main() {
    // ayni isimli bir integer tanimlarsak enum'i boyle kullaniyoruz.
    int wednesday = 55;
    days d;
    d = days::wednesday;

    switch (d) {
        case days::monday:
            cout << "Monday\n";
            break;
        case days::tuesday:
            cout << "Tuesday\n";
            break;
        case days::wednesday:
            cout << "Wednesday\n";
            break;
        case days::thursday:
            cout << "Thursday\n";
            break;
        case days::friday:
            cout << "Friday\n";
            break;
        case days::saturday:
            cout << "Saturday\n";
            break;
        case days::sunday:
            cout << "Sunday\n";
            break;
    }

    return 0;
}