#include <iostream>

using namespace std;

void print(string myName, char letter);

int main() {

    print("Mert", 'C');
    print("Ahmet", 'S');

    cout << "\n";

    return 0;
}
void print(string myName, char letter) {
    cout << "Sa " << myName << " Dil " << letter << "\n\n";
}