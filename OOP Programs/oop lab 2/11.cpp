/*11. Write a C++/Java program that uses static member functions using the concepts of class and
objects. [No static initialization will be allowed. Any input must be through the constructor
functions and the output through the member functions.]*/


#include <iostream>
using namespace std;

class StaticDemo {
private:
    static int instanceCount;

public:
    StaticDemo() {
        ++instanceCount;
    }

    ~StaticDemo() {
        --instanceCount;
    }

    static int getInstanceCount() {
        return instanceCount;
    }

    static void displayInstanceCount() {
        cout << "Number of instances: " << getInstanceCount() << endl;
    }
};

int StaticDemo::instanceCount = 0;

int main() {
    cout << "Creating first instance..." << endl;
    StaticDemo obj1;
    StaticDemo::displayInstanceCount();

    cout << "Creating second instance..." << endl;
    StaticDemo obj2;
    StaticDemo::displayInstanceCount();

    cout << "Creating third instance..." << endl;
    StaticDemo obj3;
    StaticDemo::displayInstanceCount();

    cout << "Destroying second instance..." << endl;
    {
        StaticDemo obj4;
        StaticDemo::displayInstanceCount();
    }
    cout << "Second instance destroyed." << endl;
    StaticDemo::displayInstanceCount();

    return 0;
}
