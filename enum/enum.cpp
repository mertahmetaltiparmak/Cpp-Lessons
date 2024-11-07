#include <iostream>

using namespace std;

enum Days {
    // enumlar 0 dan başlar ve bir artarak gider yani monday 0 degerini tutuyor suanda
    monday,
    tuesday,
    wednesday,
    friday,
    saturday,
    sunday
};
int main() {
    // enum turunden degisken tutacak sekilde yapilmistir.
    Days d = monday;

    switch (d) {
        case monday:
            cout << "monday\n";
            break;
        case tuesday:
            cout << "tuesday\n";
            break;
        case wednesday:
            cout << "wednesday\n";
            break;
        case friday:
            cout << "friday\n";
            break;
        case saturday:
            cout << "saturday\n";
            break;
        case sunday:
            cout << "sunday\n";
            break;
    }


    return 0;
}