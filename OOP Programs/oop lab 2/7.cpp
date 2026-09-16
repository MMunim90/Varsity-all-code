/*7. Write a C++/Java program that checks whether a given integer prime or not using the
concepts of class and objects. [No static initialization will be allowed. Any input must be through
the constructor functions and the output through the member functions.]*/


#include <iostream>
using namespace std;

class PrimeChecker {
private:
    int number;

public:
    PrimeChecker(int num) : number(num) {}

    bool isPrime() {
        if (number <= 1) return false;
        if (number <= 3) return true;
        if (number % 2 == 0 || number % 3 == 0) return false;

        for (int i = 5; i * i <= number; i += 6) {
            if (number % i == 0 || number % (i + 2) == 0) return false;
        }
        return true;
    }

    void displayResult() {
        if (isPrime()) {
            cout << number << " is a prime number." << endl;
        } else {
            cout << number << " is not a prime number." << endl;
        }
    }
};

int main() {
    int number;

    cout << "Enter an integer to check if it is prime: ";
    cin >> number;

    PrimeChecker checker(number);
    checker.displayResult();

    return 0;
}
