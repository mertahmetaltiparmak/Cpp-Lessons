#include <iostream>

using namespace std;

class shape { // abstract class
    protected:
        double area, circumference;
    public:
        virtual void print() = 0;
        virtual void calculateArea() = 0;
        virtual void calculatePerimeter() = 0;
        double getArea()const {
            return area;
        }
        double getPerimeter()const {
            return circumference;
        }
};
class rectangle:public shape {
    double widht, height;
    public:
        rectangle(double widht, double height) {
            this -> widht = widht;
            this -> height = height;
        }
        void print() {
            cout << "I am a rectangle\n\n";
        }
        void calculateArea() {
            area = widht * height;
        }
        void calculatePerimeter() {
            circumference  = 2 * (widht + height);
        }
};
class circle:public shape {
    double r;
    public:
        void print() {
            cout << "I am a circle\n\n";
        }
        circle(double r) {
            this -> r = r;
        }
        void calculateArea() {
            area = 3.14 * r * r;
        }
        void calculatePerimeter() {
            circumference = 2 * 3.14 * r;
        }

};
class triangle:public shape {
    double a, b, c, height;
    public:
        void print() {
            cout << "I am a triangle\n\n";
        }
        triangle(double a, double b, double c, double height) {
            this -> a = a;
            this -> b = b;
            this -> c = c;
            this -> height = height;
        }
        void calculateArea() {
            area = (height * c) / 2;
        }
        void calculatePerimeter() {
            circumference = a + b + c;
        }
};
int main() {
    shape* myArray[3];
    myArray[0] = new rectangle(5, 4);
    myArray[1] = new triangle(3, 4, 5, 6);
    myArray[2] = new circle(5);

    for(int i = 0; i < 3; i++) {
        myArray[i] -> print();
        myArray[i] -> calculateArea();
        myArray[i] -> calculatePerimeter();
        cout << "Area: " << myArray[i] -> getArea() << "\n";
        cout << "Perimeter: " << myArray[i] -> getPerimeter() << "\n";
        cout << "---------------\n";
    }

    return 0;
}