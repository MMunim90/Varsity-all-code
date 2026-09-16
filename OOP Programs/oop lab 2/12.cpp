/*12. Write a C++/Java program that implements the concept of constructor overloading. */

#include <iostream>
using namespace std;
class Box {
private:
    double length;
    double width;
    double height;
public:
    Box() : length(1.0), width(1.0), height(1.0) {
        cout << "Default constructor called." << endl;
    }

    Box(double side) : length(side), width(side), height(side) {
        cout << "Parameterized constructor with one argument called." << endl;
    }

    Box(double l, double w, double h) : length(l), width(w), height(h) {
        cout << "Parameterized constructor with three arguments called." << endl;
    }

    void displayDimensions() {
        cout << "Length: " << length << ", Width: " << width << ", Height: " << height << endl;
    }
};

int main() {

    cout << "Creating box1 using default constructor..." << endl;
    Box box1;
    box1.displayDimensions();

    cout << "Creating box2 using parameterized constructor with one argument..." << endl;
    Box box2(5.0);
    box2.displayDimensions();

    cout << "Creating box3 using parameterized constructor with three arguments..." << endl;
    Box box3(2.0, 3.0, 4.0);
    box3.displayDimensions();

    return 0;
}


