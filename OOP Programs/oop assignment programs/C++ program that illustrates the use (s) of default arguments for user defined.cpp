#include <iostream>

void displayInfo(const std::string& name, int age = 18, const std::string& country = "USA") {
    std::cout << "Name: " << name << ", Age: " << age << ", Country: " << country << std::endl;
}

int main() {
    displayInfo("Alice", 25, "Canada");

    displayInfo("Bob", 30);

    displayInfo("Charlie");

    return 0;
}

