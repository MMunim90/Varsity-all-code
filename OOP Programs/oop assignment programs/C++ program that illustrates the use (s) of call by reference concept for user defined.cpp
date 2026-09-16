#include <iostream>

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 5, num2 = 10;

    std::cout << "Before swapping:" << std::endl;
    std::cout << "num1 = " << num1 << ", num2 = " << num2 << std::endl;

    swap(num1, num2);

    std::cout << "After swapping:" << std::endl;
    std::cout << "num1 = " << num1 << ", num2 = " << num2 << std::endl;

    return 0;
}
