/*3. Write a C++/Java program that performs basic arithmetic operations using the concepts of
class and objects. [No static initialization will be allowed. Any input must be through the
constructor functions and the output through the member functions.]*/


#include <iostream>
using namespace std;

class ArithmeticOperations {
private:
    double num1;
    double num2;
    double temp;

public:
    ArithmeticOperations(double x, double y) : num1(x), num2(y) {}

    double add() {
        return num1 + num2;
    }

    double subtract() {
        return num1 - num2;
    }

    double multiply() {
        return num1 * num2;
    }

    double divide() {
        if (num2 != 0) {
            return num1 / num2;
        }
        else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }

    void displayResults() {
        cout << "Addition: " << add() << endl;
        cout << "Subtraction: " << subtract() << endl;
        cout << "Multiplication: " << multiply() << endl;
        cout << "Division: " << divide() << endl;
    }
};

int main() {
    double number1, number2;

    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;

    ArithmeticOperations operations(number1, number2);

    operations.displayResults();

    return 0;
}

