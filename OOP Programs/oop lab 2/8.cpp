/*8. Write a C++/Java program that finds the factorial of a given number using the concepts of
class and objects. [No static initialization will be allowed. Any input must be through the
constructor functions and the output through the member functions.]*/


#include <iostream>
using namespace std;

class FactorialCalculator {
private:
    int number;

public:
    FactorialCalculator(int num) : number(num) {}

    long long calculateFactorial() {
        if (number < 0) {
            cout << "Error: Factorial of a negative number is not defined." << endl;
            return -1;
        }
        long long factorial = 1;
        for (int i = 1; i <= number; ++i) {
            factorial *= i;
        }
        return factorial;
    }

    void displayResult() {
        long long result = calculateFactorial();
        if (result != -1) {
            cout << "The factorial of " << number << " is " << result << "." << endl;
        }
    }
};

int main() {
    int number;

    cout << "Enter a number to find its factorial: ";
    cin >> number;

    FactorialCalculator calculator(number);

    calculator.displayResult();

    return 0;
}

