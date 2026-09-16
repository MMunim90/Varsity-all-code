#include <iostream>

void print(int i) {
    std::cout << "Printing an integer: " << i << std::endl;
}
void print(double f) {
    std::cout << "Printing a double: " << f << std::endl;
}
void print(const std::string& s) {
    std::cout << "Printing a string: " << s << std::endl;
}
int main() {
    int a = 10;
    double b = 5.7;
    std::string c = "Hello, World!";

    print(a);
    print(b);
    print(c);

    return 0;
}

