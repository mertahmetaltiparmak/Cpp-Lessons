#include <iostream>
#include <string>
// hazir string functionlarinin bulundugu library
#include <cctype>
#include <cstring>

using namespace std;

int main() {
  /*   char ch;
    cout << "Enter a character:";
    cin >> ch;
    // isalnum karakter ve rakamlari alir ama ozel karakter olunca 0 degerini dondurur.
    if(isalnum(ch)) {
        cout << "\nYou entered a letter or character.\n";
    } else {
        cout << "\nYou did not\n";
    } */

    /* string txt;
    cout << "\nEnter a string:";
    getline(cin, txt);
    for (int i = 0; i < txt.size(); i++) {
        if (isalnum(txt[i]))
            cout << txt[i] << " ";
    } */
   /* 
    char txt[] = "mert\n altiparmak";
    int i = 0;
    // \'li herhangi bir sey olursa donguyu kiriyor. \n \t farketmez. o zamana kadar farmi diye kontrol ediyor.
    while (!iscntrl(txt[i])) {
        cout << txt[i];
        i++;
    } */

/* 
    string txt;
    cout << "Bir cumle giriniz:";
    getline(cin , txt);
    for (int i = 0; i < txt.size(); i++) {
        // isalpha sadece harfleri aliyor.
        if (isalpha(txt[i])) {
            cout << txt[i] << " ";
        }
    }
     */
    /* char ch;
    cout << "Enter a character:";
    cin >> ch;
    // isdigit rakam varsa bir donduruyor yoksa 0 dondurur.
    if(isdigit(ch)) {
        cout << "\nYou entered digit.\n";
    } else {
        cout << "\nYou did not\n";
        } */
       
    /* char ch;
    cout << "Enter a character:";
    cin >> ch;
    // isgraph ??
    if(isgraph(ch)) {
        cout << "\nsuccessful.\n";
    } else {
        cout << "\nYou did not\n";
        }
 */
    char str[] = "Sa turk varmiydi aga??";
    int myCount = 0;
    for (int i = 0; i <= strlen(str); i++) {
        if(isblank(str[i])) {
            myCount++;
        }
    }
    cout << "Girdiginiz space sayisi: " << myCount << "\n";

    return 0;
    }
