#include <iostream>

void passByValue(int num) {
    std::cout << "Inside passByValue, before modifying: " << num << std::endl;
    num = 100;
    std::cout << "Inside passByValue, after modifying: " << num << std::endl;
}

int main() {
    int original = 50;

    std::cout << "Before calling passByValue: " << original << std::endl;

    passByValue(original);

    std::cout << "After calling passByValue: " << original << std::endl;

    return 0;
}

