/*16. Write a C++/Java program that implements the concept of destructor. */


#include <iostream>
using namespace std;

class Rectangle {
private:
    int width;
    int height;

public:
    Rectangle(int w, int h) {
        width = w;
        height = h;
        cout << "Rectangle created with width = " << width << " and height = " << height << endl;
    }

    ~Rectangle() {
        cout << "Rectangle destroyed with width = " << width << " and height = " << height << endl;
    }

    int area() {
        return width * height;
    }

    void display() {
        cout << "Width: " << width << ", Height: " << height << endl;
    }
};

int main() {
    {
        Rectangle rect1(5, 3);
        rect1.display();
        cout << "Area: " << rect1.area() << endl;
    }

    cout << "Rectangle object out of scope, destructor should have been called." << endl;

    return 0;
}
