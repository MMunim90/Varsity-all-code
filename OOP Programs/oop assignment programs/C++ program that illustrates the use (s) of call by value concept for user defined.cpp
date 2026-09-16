#include <iostream>
class Point {
private:
    int x, y;

public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}
    int getX() const { return x; }
    int getY() const { return y; }
    void display() const {
        std::cout << "(" << x << ", " << y << ")";
    }
};
void movePoint(Point p, int dx, int dy) {
    p = Point(p.getX() + dx, p.getY() + dy);
    std::cout << "Inside movePoint: ";
    p.display();
    std::cout << std::endl;
}

int main() {
    Point p1(5, 5);

    std::cout << "Original point: ";
    p1.display();
    std::cout << std::endl;

    movePoint(p1, 2, 3);

    std::cout << "After movePoint (outside function): ";
    p1.display();
    std::cout << std::endl;

    return 0;
}

