#include <iostream>
class SecondClass;

class FirstClass {
private:
    int value;
public:
    FirstClass(int val) : value(val) {}
    friend int findMax(const FirstClass &first, const SecondClass &second);
};
class SecondClass {
private:
    int value;
public:
    SecondClass(int val) : value(val) {}
    friend int findMax(const FirstClass &first, const SecondClass &second);
};
int findMax(const FirstClass &first, const SecondClass &second) {
    return (first.value > second.value) ? first.value : second.value;
}
int main() {
    FirstClass firstObj(10);
    SecondClass secondObj(20);
    std::cout << "Maximum value: " << findMax(firstObj, secondObj) << std::endl;
    return 0;
}

