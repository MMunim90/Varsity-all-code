#include <iostream>
class Swapper {
public:
    void swap(int &a, int &b) {
        int temp = a;
        a = b;
        b = temp;
    }
};

int main() {
    Swapper swapper;

    int x = 10;
    int y = 20;

    std::cout << "Before swapping:" << std::endl;
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;

    swapper.swap(x, y);
    std::cout << "After swapping:" << std::endl;
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;

    return 0;
}

