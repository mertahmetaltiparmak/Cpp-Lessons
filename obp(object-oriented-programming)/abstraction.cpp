#include <iostream>

using namespace std;

class smartPhone {  // abstract - base class parent  
    public:
        // base class'ta belirttigimiz virtual methodlari derived class kullanmak zorunda yoksa hata aliriz.
        virtual void takeAPhoto() = 0;
        virtual void sendAMessage() = 0;
        virtual void makeACall() = 0;
};
class Android:public smartPhone { // derived -child
    public:
        void takeAPhoto() {
            cout << "Android photo\n";
        }
        void sendAMessage() {
            cout << "Android is sending a message\n";
        }
        void makeACall() {
            cout << "Android is calling\n\n";
        }
};
class IOS:public smartPhone { // derived - child
    public:
        void takeAPhoto() {
            cout << "IOS photo\n";
        }
        void sendAMessage() {
            cout << "IOS is sending a message\n";
        }
        void makeACall() {
            cout << "IOS is calling\n\n";
        }
};
class HarmonyOS:public smartPhone { // derived - child
    public: 
        void takeAPhoto() {
            cout << "HarmonyOS photo\n";
        }
        void sendAMessage() {
            cout << "HarmonyOs is sending a message\n";
        }
        void makeACall() {
            cout << "HarmonyOS is calling\n";
        }
};
int main() { // nesnelerde pointerleri boyle kullaniyorduk yeni nesne olustururak
    // niye pointerlerla boyle nesneyi kullaniyoruz ? (dinamik bellek kullanimi disinda.)
    // eger inhertiance kullanmassak boyle pointer olarak da kullanimiyoruz.
    smartPhone* s1 = new Android();
    // smartphone* yaparak bu nesneden diger nesnelere ulasabiliriz.
    smartPhone* s2 = new IOS();
    smartPhone* s3 = new HarmonyOS();

    s1 -> takeAPhoto();
    s1 -> sendAMessage();
    s1 -> makeACall();

    s2 -> takeAPhoto();
    s2 -> sendAMessage();
    s2 -> makeACall();

    s3 -> takeAPhoto();
    s3 -> sendAMessage();
    s3 -> makeACall();

    return 0;
}