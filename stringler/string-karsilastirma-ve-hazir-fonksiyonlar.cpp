#include <iostream>
#include <string>

using namespace std;

int main() {
    string myText;
    cout << "Bir cumle giriniz:";
    getline(cin, myText);
    // .empty string bos ise 1 degeri doner. dolu oldugu icin 0 doncek degilini aldik ! ile o yuzden if'in icine girecek.
    if(!myText.empty()) {
        cout << "cumleniz: " << myText << "\n";
    } else {
        cout << "cumleniz bostur." << "\n";
    }

    return 0;
}