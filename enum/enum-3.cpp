#include <iostream>

using namespace std;
// enumlari class olarak tanimlayip boyle ide kullanabiliriz.
enum class days {
    monday = 10,
    tuesday = 20,
    wednesday = 30,
    thursday = 40,
    friday,
    saturday,
    sunday
};
int main() {
    days d;
    d = days::monday;
    // baska bir variable ile karismasin diye boyle yaptik.
    cout << (int)days::friday << "\n";

    return 0;
}