#include <iostream>
// kendi dosyamizi include ederken  "" kullanamayi unutmamaliyiz!!
#include "class.h"

using namespace std;

int main() {
    car obj;

    obj.setPrice(15000);

    cout << obj.getPrice() << " TL\n";

    return 0;
}