#include <bits/stdc++.h>
class Student {
private:
    std::string name;
    std::vector<int> grades;

public:
    Student(const std::string &name) : name(name) {}
    void addGrade(int grade) {
        if (grade >= 0 && grade <= 100) {
            grades.push_back(grade);
        } else {
            std::cout << "Invalid grade. Please enter a grade between 0 and 100." << std::endl;
        }
    }
    double calculateGPA() const {
        if (grades.empty()) {
            std::cout << "No grades available for " << name << "." << std::endl;
            return 0.0;
        }
        double total = 0;
        for (int grade : grades) {
            total += grade;
        }
        return total / grades.size();
    }
    void printStudentDetails() const {
        std::cout << "Student: " << name << std::endl;
        std::cout << "Grades: ";
        for (int grade : grades) {
            std::cout << grade << " ";
        }
        std::cout << std::endl;
        std::cout << "GPA: " << calculateGPA() << std::endl;
    }
};
int main() {
    Student student1("Alice");
    Student student2("Bob");
    student1.addGrade(85);
    student1.addGrade(90);
    student1.addGrade(78);

    student2.addGrade(92);
    student2.addGrade(88);
    student2.addGrade(79);
    student2.addGrade(95);
    student1.printStudentDetails();
    std::cout << std::endl;
    student2.printStudentDetails();
    return 0;
}

