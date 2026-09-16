#include <iostream>
class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double len, double wid) : length(len), width(wid) {}
    double calculateArea() const {
        return length * width;
    }
    double calculatePerimeter() const {
        return 2 * (length + width);
    }
};
Rectangle createRectangle(double len, double wid) {
    Rectangle rect(len, wid);
    return rect;
}

int main() {
    Rectangle myRectangle = createRectangle(5.0, 3.0);
    std::cout << "Rectangle Properties:" << std::endl;
    std::cout << "Area: " << myRectangle.calculateArea() << std::endl;
    std::cout << "Perimeter: " << myRectangle.calculatePerimeter() << std::endl;

    return 0;
}

