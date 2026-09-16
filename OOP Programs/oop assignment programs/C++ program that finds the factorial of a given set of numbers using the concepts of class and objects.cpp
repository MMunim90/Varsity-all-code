#include <iostream>

class FactorialCalculator {
public:
    unsigned long long calculateFactorial(int num) const {
        if (num < 0) {
            std::cerr << "Factorial is not defined for negative numbers." << std::endl;
            return 0;
        }
        if (num == 0 || num == 1) {
            return 1;
        }
        unsigned long long factorial = 1;
        for (int i = 2; i <= num; ++i) {
            factorial *= i;
        }
        return factorial;
    }
};

int main() {
    FactorialCalculator factorialCalculator;
    int numbers[] = {5, 8, 10, -3, 12};
    for (int num : numbers) {
        std::cout << "Factorial of " << num << " is: " << factorialCalculator.calculateFactorial(num) << std::endl;
    }

    return 0;
}
