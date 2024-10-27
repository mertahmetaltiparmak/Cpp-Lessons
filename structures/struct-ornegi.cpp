#include <iostream>

using namespace std;

struct date {
    int day;
    int month;
    int year;
};
struct date age(struct date x, struct date y);

int main() {
    // birden fazla nesne olusturmus gibi oldu. bir suru variable olusturmaya gerek kalmadi.
    struct date today, birth,result;
    cout << "bu gunun tarihini giriniz(gun,ay,yil): ";
    cin >> today.day >> today.month >> today.year;

    cout << "Dogum tarihinizi giriniz(gun,ay,yil): ";
    cin >> birth.day >> birth.month >> birth.year;
    result = age(today, birth);
    cout << result.year << " yil " << result.month << " ay " << result.day << " gundur hayattasin\n";

    return 0;
}
struct date age(struct date x, struct date y) {
    struct date result = {0, 0, 0};
    if (x.day < y.day) {
        x.month -= 1;
        result.day = 30 + x.day - y.day;
    }
    else {
        result.day = x.day - y.day;
    }
    if (x.month < y.month) {
        x.year -= 1;
        result.month = 12 + x.month - y.month;
    } else {
        result.month = x.month - y.month;
    }
    result.year = x.year - y.year;
    return result;
}