/*1. Write a C++/Java program that performs the basic I/O using the concepts of class and objects.
[No static initialization will be allowed. Any input must be through the constructor functions and
the output through the member functions.]*/

#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}

    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main() {
    string name;
    int age;

    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;

    Person person(name, age);
    person.displayInfo();

    return 0;
}
