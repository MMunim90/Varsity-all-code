/*14. Write a C++/Java program that implements the concept run-time function overloading.*/


#include <iostream>
#include <memory>

class Shape {
public:
    virtual void draw() const {
        std::cout << "Drawing a shape." << std::endl;
    }
    virtual ~Shape() = default;
};

class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a circle." << std::endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a rectangle." << std::endl;
    }
};

void drawShape(const Shape& shape) {
    shape.draw();
}

int main() {
    std::unique_ptr<Shape> shape;
    int choice;

    std::cout << "Enter the shape to draw (1 for Circle, 2 for Rectangle): ";
    std::cin >> choice;

    if (choice == 1) {
        shape = std::make_unique<Circle>();
    } else if (choice == 2) {
        shape = std::make_unique<Rectangle>();
    } else {
        std::cout << "Invalid choice! Drawing default shape." << std::endl;
        shape = std::make_unique<Shape>();
    }

    drawShape(*shape);

    return 0;
}
