#include <iostream>

using namespace std;

int main() {
    float average = 0;
    float numbers[3];

    cout << "Uc sayi giriniz:";
    cin >> numbers[0] >> numbers[1] >> numbers[2];
    // eger uc sayidan fazla giren bir dongu kursaydik diye / 3 yerine bunu kendim yazdim.
    average = (numbers[0] + numbers[1] + numbers[2]) / (sizeof(numbers) / sizeof(int));

    cout << "\nortalama: " << average << "\n";  

    return 0;
}