/*13. Write a C++/Java program that implements the concept of copy constructor.*/


#include <iostream>
#include <cstring>

class MyString {
private:
    char* str;
public:
    MyString(const char* s = nullptr) {
        if (s) {
            str = new char[strlen(s) + 1];
            strcpy(str, s);
        } else {
            str = new char[1];
            str[0] = '\0';
        }
    }

    MyString(const MyString& source) {
        str = new char[strlen(source.str) + 1];
        strcpy(str, source.str);
    }

    ~MyString() {
        delete[] str;
    }

    void display() const {
        std::cout << str << std::endl;
    }

    const char* getStr() const {
        return str;
    }
};

int main() {
    char input[100];
    std::cout << "Enter a string: ";
    std::cin.getline(input, 100);

    MyString str1(input);
    MyString str2 = str1;

    std::cout << "Original string: ";
    str1.display();

    std::cout << "Copied string: ";
    str2.display();

    return 0;
}
