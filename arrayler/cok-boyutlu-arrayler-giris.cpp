#include <iostream>

using namespace std;

int main() {
    /* iki boyutlu arraydir mantigi c'deki ile aynidir.
    /* iki satir 4 sutundan olusur.
     */
    string letters[2] [4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}
    };
    // uc boyutlu arraylerde ise 
    // 2 tane 2 satir ve 2 sutun olur.
    string threeDLetters[2][2][2] = {
        {
            {"A", "B"},
            {"C", "D"}
        },
        {
            {"E", "F"},
            {"G", "H"}
        }
    };

    return 0;
}