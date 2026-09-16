/*10. Write a C++/Java program that uses static data members using the concepts of class and
objects. [No static initialization will be allowed. Any input must be through the constructor
functions and the output through the member functions.]*/



#include <iostream>
using namespace std;

class ObjectCounter {
private:
    static int objectCount;

public:
    ObjectCounter() {
        ++objectCount;
    }

    ~ObjectCounter() {
        --objectCount;
    }

    static int getObjectCount() {
        return objectCount;
    }

    void displayObjectCount() {
        cout << "Current number of objects: " << getObjectCount() << endl;
    }
};

int ObjectCounter::objectCount = 0;

int main() {
    cout << "Creating first object..." << endl;
    ObjectCounter obj1;
    obj1.displayObjectCount();

    cout << "Creating second object..." << endl;
    ObjectCounter obj2;
    obj2.displayObjectCount();

    cout << "Creating third object..." << endl;
    ObjectCounter obj3;
    obj3.displayObjectCount();

    cout << "Destroying second object..." << endl;
    {
        ObjectCounter obj4;
        obj4.displayObjectCount();
    }
    cout << "Second object destroyed." << endl;
    obj1.displayObjectCount();
    obj2.displayObjectCount();
    obj3.displayObjectCount();

    return 0;
}
