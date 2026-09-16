#include <iostream>

void passByReference(int& num) {
    std::cout << "Inside passByReference, before modifying: " << num << std::endl;
    num = 100;
    std::cout << "Inside passByReference, after modifying: " << num << std::endl;
}

int& returnByReference(int& num) {
    return num;
}

int main() {
    int original = 50;
    std::cout << "Before calling passByReference: " << original << std::endl;
    passByReference(original);
    std::cout << "After calling passByReference: " << original << std::endl;
    int& ref = returnByReference(original);
    ref = 200;
    std::cout << "After modifying through returnByReference: " << original << std::endl;

    return 0;
}

