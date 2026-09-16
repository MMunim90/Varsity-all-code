// single inheritance using public derivation


#include <iostream>
using namespace std;

class worker {
    int age;
    char name[10];
public:
    void get();
    void show();
};

void worker::get() {
    cout << "Your name please: ";
    cin >> name;
    cout << "Your age please: ";
    cin >> age;
}

void worker::show() {
    cout << "My name is: " << name << " and my age is: " << age << endl;
}

class manager : public worker {
    int now;
public:
    void get();
    void show();
};

void manager::get() {
    worker::get();
    cout << "Number of workers under you: ";
    cin >> now;
}

void manager::show() {
    worker::show();
    cout << "Number of workers under me are: " << now << endl;
}

int main() {
    worker W1;
    manager M1;
    M1.get();
    M1.show();
    return 0;
}
