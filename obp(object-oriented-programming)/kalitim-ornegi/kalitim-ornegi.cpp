#include <iostream>
using namespace std;
// siralama onemli buradaki student humani miras alcagi icin siralama boyle
#include "human.h"
#include "student.h"

int main() {
    students st("293","Mert", "Altiparmak", 18);
    cout << "Student No: "<< st.getStudentNo() << "\n";
    cout << "Name: " << st.getName() << "\n";
    cout << "Lastname: " << st.getLastName() << "\n";
    cout << "Age: " << st.getAge() << "\n";


}