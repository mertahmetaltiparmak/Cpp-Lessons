#include <iostream>

using namespace std;
// parent
class food {
    public:
        string name;
        float calories;
        void message() {
            cout << name << " [" << calories << " cal]\n";
        }
};
// child
// eger inhertiance kullanamasaydik string name ve calories'yi tekrar bildirmemiz gerekirdi.
class drink:public food { 
    public: 
        float ounces;
        float cal_per_ounce() {
            return calories / ounces;
        }
};
int main() {
    food f1;
    f1.name = "Doner";
    f1.calories = 543.25;
    f1.message();

    drink d1;
    d1.name = "Green tea";
    d1.calories = 94.1;
    d1.ounces = 7;
    d1.message();

    cout << d1.name <<" [" << d1.cal_per_ounce() << " cal/ounces]\n";

    return 0;
}