#include <iostream>
#include <memory>

using namespace std;

int main() {
    unique_ptr<int> uqPtr = make_unique<int>(9);
    // tasiyabiliriz ama kopyalama islemini yapamayiz.
    // uqPtr'deki degeri uqPtr2'ye tasidik artik ilk pointer bos oldu ve uqPtr2 ilkinin yerine gecti.
    unique_ptr<int> uqPtr2 = move(uqPtr);

    cout << "Value: " << *uqPtr2;

    return 0;
}