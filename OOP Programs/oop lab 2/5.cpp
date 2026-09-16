/*5. Write a C++/Java program that calculates the GPA for students using the concepts of class
and objects. [No static initialization will be allowed. Any input must be through the constructor
functions and the output through the member functions.]*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    vector<double> grades;
    vector<int> credits;

public:
    Student(string n, int r, vector<double> g, vector<int> c) : name(n), rollNumber(r), grades(g), credits(c) {}

    double calculateGPA() {
        double totalGradePoints = 0;
        int totalCredits = 0;

        for (size_t i = 0; i < grades.size(); ++i) {
            totalGradePoints += grades[i] * credits[i];
            totalCredits += credits[i];
        }

        if (totalCredits == 0) {
            cout << "Error: Total credits cannot be zero." << endl;
            return 0;
        }

        return totalGradePoints / totalCredits;
    }

    void displayDetails() {
        cout << "Name: " << name << ", Roll Number: " << rollNumber << ", GPA: " << calculateGPA() << endl;
    }
};

int main() {
    int numberOfStudents;
    cout << "Enter the number of students: ";
    cin >> numberOfStudents;

    vector<Student> students;

    for (int i = 0; i < numberOfStudents; ++i) {
        string name;
        int rollNumber;
        int numberOfSubjects;

        cout << "Enter details for student " << i + 1 << ":" << endl;
        cout << "Name: ";
        cin >> ws;
        getline(cin, name);
        cout << "Roll Number: ";
        cin >> rollNumber;
        cout << "Enter the number of subjects: ";
        cin >> numberOfSubjects;

        vector<double> grades(numberOfSubjects);
        vector<int> credits(numberOfSubjects);

        for (int j = 0; j < numberOfSubjects; ++j) {
            cout << "Enter grade for subject " << j + 1 << ": ";
            cin >> grades[j];
            cout << "Enter credit for subject " << j + 1 << ": ";
            cin >> credits[j];
        }

        students.emplace_back(name, rollNumber, grades, credits);
    }

    cout << "\nAll Students' Records:" << endl;
    for (Student& student : students) {
        student.displayDetails();
    }

    return 0;
}
