#include <iostream>
#include <string>

using namespace std;

int main() {
/*     string txt;
    txt = "This is an example sentence";
    cout << txt << "\n";
    // 10. karakterden sonra 8 karakter silicek yani example silicek.
    txt.erase(10, 8);
    cout << txt << "\n";
    // 9. karakteri silicek baslangictan yani n harfini silecek.
    txt.erase(txt.begin() + 9);
    cout << txt << "\n";
    // 5. karakterden silmeye basliyip sondan 9 eksik olana kadar devam ediyor.
    txt.erase(txt.begin() + 5, txt.end() - 9);
    cout << txt << "\n";
 */
    
    string base, txt, txt2, txt3, txt4;
    base = "This is a test string";
    txt2 = "n example";
    txt3 = "sample phrase";
    txt4 = "useful";
    txt = base;
    cout << txt << "\n";
    // 9. karakterden sonraki 5 karakteri txt2 ile degistirir.
    txt.replace(9, 5, txt2);
    // cikti : This is an example string
    cout << txt << "\n";
    // 19.karakterden sonraki 6 karakteri txt3'teki 7. karakterden sonraki 6 karakterle degistir.
    txt.replace(19, 6, txt3, 7, 6);
    cout << txt << "\n";
    // 8. karakterden sonraki 10 karakter yerine just a degistirir.
    txt.replace(8, 10, "just a");
    // cikti: this is just a phrase
    cout << txt << "\n";
    // 8. karakterden sonraki 6 karakteri slip yerine shorty yazdiracak ama 6 karakter ayirdigimiz icin a short olacak
    txt.replace(8, 6, "a shorty", 7);
    // This is a short phrase ciktisini alacagiz.
    cout << txt << "\n";
    // 22. satirdan sonraya 3 adet 1 tane olacak sekilde ! yazdirir.
    txt.replace(22, 1, 3, '!');
    // cikti: This is a short phrase!!!
    cout << txt << "\n";
    // txt3 yerlestircek son uc karakter disinda
    txt.replace(txt.begin(), txt.end() - 3, txt3);
    // cikti: sample phrase!!!
    cout << txt << "\n";

    return 0;
}