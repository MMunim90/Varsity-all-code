// new and delete
#include <iostream>

int main() {
    int *singleInt = new int;
    *singleInt = 42;
    std::cout << "Value of singleInt: " << *singleInt << std::endl;

    delete singleInt;

    int size = 6;
    int *intArray = new int[size];

    for (int i = 0; i < size; ++i) {
        intArray[i] = i * 10;
    }

    std::cout << "Array values: ";
    for (int i = 0; i < size; ++i) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;
    delete[] intArray;

    return 0;
}
