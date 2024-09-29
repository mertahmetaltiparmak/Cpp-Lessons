#include <iostream>

using namespace std;

int main() {
    char letter;

    cout << "enter a letter:";
    cin >> letter;

    switch (letter) {
        case 'a':
            cout << "\nThis letter a vowel letter.\n";
            break;
        case 'A':
            cout << "\nThis letter a vowel letter.\n";
            break;
        case 'e':
            cout << "\nThis letter a vowel letter.\n";
            break;
        case 'E':
            break;
        case 'i':
            cout << "\nThis letter a vowel letter.\n";
            break;
        case 'I':
            cout << "\nThis letter a vowel letter.\n";
            break;
        case 'o':
            cout << "\nThis letter a vowel letter.\n";
        case 'O':
            cout << "\nThis letter a vowel letter.\n";
            break;
        case 'u':
            cout << "\nThis letter a vowel letter.\n";
            break;
        case 'U':
            cout << "\nThis letter a vowel letter.\n";
            break;
        default:
            cout << "\nThis letter a consonant letter.\n";
    }
    
    return 0;
}