#include <iostream>
#include <cmath>

int main() {
    double x = 9.0;
    double y = 2.0;
    double z = -5.0;

    std::cout << "Square root of " << x << " is " << std::sqrt(x) << std::endl;
    std::cout << x << " raised to the power " << y << " is " << std::pow(x, y) << std::endl;
    std::cout << "Absolute value of " << z << " is " << std::abs(z) << std::endl;
    std::cout << "Sine of " << y << " is " << std::sin(y) << std::endl;
    std::cout << "Cosine of " << y << " is " << std::cos(y) << std::endl;
    std::cout << "Tangent of " << y << " is " << std::tan(y) << std::endl;
    std::cout << "Natural logarithm of " << x << " is " << std::log(x) << std::endl;
    std::cout << "Base-10 logarithm of " << x << " is " << std::log10(x) << std::endl;
    std::cout << "Ceiling of " << x << " is " << std::ceil(x) << std::endl;
    std::cout << "Floor of " << x << " is " << std::floor(x) << std::endl;
    std::cout << "Round " << x << " to the nearest integer is " << std::round(x) << std::endl;

    return 0;
}

