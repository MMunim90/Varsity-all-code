#include <iostream>

inline int square(int x) {
    return x * x;
}
int main() {
    int a = 5;
    int b = 10;
    std::cout << "Square of " << a << " is " << square(a) << std::endl;
    std::cout << "Square of " << b << " is " << square(b) << std::endl;
    for (int i = 1; i <= 5; ++i) {
        std::cout << "Square of " << i << " is " << square(i) << std::endl;
    }

    return 0;
}

