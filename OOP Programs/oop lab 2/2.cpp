/*2. Write a C++/Java program that uses reference variables as arguments to swap the values of
a pair of integers using the concepts of class and objects. [No static initialization will be allowed.
Any input must be through the constructor functions and the output through the member
functions.]*/


#include <iostream>
using namespace std;

class Swapper {
private:
    int &a;
    int &b;

public:
    Swapper(int &x, int &y) : a(x), b(y) {}

    void swapValues() {
        int temp = a;
        a = b;
        b = temp;
    }

    void displayValues() {
        cout << "a: " << a << ", b: " << b << endl;
    }
};

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    Swapper swapper(num1, num2);

    cout << "Before swap:" << endl;
    swapper.displayValues();

    swapper.swapValues();

    cout << "After swap:" << endl;
    swapper.displayValues();

    return 0;
}
