/*15. Write a C++/Java program that implements the concept of constructor with default
arguments.*/


#include <iostream>
using namespace std;

class Rectangle {
private:
    int width;
    int height;

public:
    Rectangle(int w = 1, int h = 1) {
        width = w;
        height = h;
    }

    int area() {
        return width * height;
    }

    void display() {
        cout << "Width: " << width << ", Height: " << height << endl;
    }
};

int main() {
    Rectangle rect1;
    Rectangle rect2(5);
    Rectangle rect3(4, 7);

    cout << "Rectangle 1: ";
    rect1.display();
    cout << "Area: " << rect1.area() << endl;

    cout << "Rectangle 2: ";
    rect2.display();
    cout << "Area: " << rect2.area() << endl;

    cout << "Rectangle 3: ";
    rect3.display();
    cout << "Area: " << rect3.area() << endl;

    return 0;
}
