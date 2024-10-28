#include <iostream>

using namespace std;

int main() {
    int number = 0;

    cout << "Enter the number of the students: ";
    cin >> number;

    // array'imizi burada olusturarak hem dinamik yapiyoruz hemde fazladan alan ayirmiyoruz.
    int* myNotes = new int [number];
    cout << "Enter the notes of students: ";
    for (int i = 0; i < number; i++)
        cin >> myNotes[i];
    for (int i = 0; i < number; i++) 
        cout << "Note " << (i + 1) << " : " << myNotes[i] << "\n";
    delete[] myNotes;
 
    return 0;
}