#include <iostream>

using namespace std;

int main() {
    string metin;
    cout << "Bir cumle girin:";
    // cin ile sadece space kadar kisimki cumleyi aliyor c ile ayni sikinti.
    // bu yuzden getline kullaniyoruz ve ilk parametre olarak cin sonrada string'imizin adini giriyoruz.
    getline(cin, metin);
    cout << "\nCumleniz:" << metin << "\n\n";
    // string yerine char kullanirsak c'deki array kullanmaliyiz.
    char myText [50];
    cout << "Enter a sentence:";
    cin.getline(myText, sizeof(myText));
    // ilk parametresi metinimiz ikinci kac karakter alacagimiz
    cout << "\nYour message:"<< myText << "\n";

    return 0;
}