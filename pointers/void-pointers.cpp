#include <iostream>

using namespace std;

void showMe(void*, char);

int main() {
    int number = 5;
    float number2 = 3.14;
    double number3 = 4.543233;
    char letter = 'M';
    showMe(&number, 'i');
    showMe(&number2, 'f');
    showMe(&number3, 'd');
    showMe(&letter, 'c');

    return 0;
}
// void turunden bir pointer oldugundan tek tek boyle turunu belirttik.
void showMe(void* ptr, char type) {
    switch (type) {
        case 'i':
            cout << *((int*)ptr) << "\n"; 
            break;
        case 'f':
            cout << *((float*)ptr) << "\n";
            break;
        case 'd':
            cout << *((double*)ptr) << "\n";
        case 'c':
            cout << *((char*)ptr) << "\n";
    }
}