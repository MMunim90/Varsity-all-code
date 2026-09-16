/*4. Write a C++/Java program that handles the students’ records using the concepts of class and
objects. [No static initialization will be allowed. Any input must be through the constructor
functions and the output through the member functions.]*/


#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    double marks;

public:
    Student(string n, int r, double m) : name(n), rollNumber(r), marks(m) {}

    void displayDetails() {
        cout << "Name: " << name << ", Roll Number: " << rollNumber << ", Marks: " << marks << endl;
    }
    string getName() {
        return name;
    }
    int getRollNumber() {
        return rollNumber;
    }
    double getMarks() {
        return marks;
    }
};

class StudentRecords {
private:
    vector<Student> students;

public:
    void addStudent(Student student) {
        students.push_back(student);
    }

    void displayAllStudents() {
        for (Student s : students) {
            s.displayDetails();
        }
    }
};

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    StudentRecords records;

    for (int i = 0; i < n; ++i) {
        string name;
        int rollNumber;
        double marks;

        cout << "Enter details for student " << i + 1 << ":" << endl;
        cout << "Name: ";
        cin >> ws;
        getline(cin, name);
        cout << "Roll Number: ";
        cin >> rollNumber;
        cout << "Marks: ";
        cin >> marks;

        Student student(name, rollNumber, marks);
        records.addStudent(student);
    }

    cout << "\nAll Students' Records:" << endl;
    records.displayAllStudents();

    return 0;
}
