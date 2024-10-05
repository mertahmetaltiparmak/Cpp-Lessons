#include <iostream>
#include <time.h>

using namespace std;

int main() {
    double myValue, myNumbers[5] = {0, 0, 0, 0, 0};
    int index, choice;
    do {
        cout << "Make a choice(Exit -1)\n";
        cout << "\t1 - Write to array:\n";
        cout << "\t2 - Read from array:\n";
        cin >> choice;
        if (choice == -1)
            break;
        if (choice != 1 && choice != 2) {
            cout << "are you kidding me!\n";    
        }
        cout << "enter array index:";
        cin >> index;
        if (index < 0 || index > 4) {
            cout <<  "index must be in the range of 0-4\n\n";
            _sleep(1500);
            continue;
        }
        switch(choice) {
            case 1:
                cout << "\nEnter the value:";
                cin >> myValue;
                myNumbers[index] = myValue;
                _sleep(1500);
                cout << "\nwriting is succesful\n";
                _sleep(1000);
                break;
            case 2:
                cout << "myNumbers[" << index << "]= " << myNumbers[index] << "\n\n";
                _sleep(2000);
                break;
        }

    } while (choice != -1);

    return 0;
}