#include <iostream>
using namespace std;

// Student class definition
class Student {
private:
    // Private data members
    string name;
    int rollNumber;
    double grade;

public:
    // Setter for name
    void setName(string studentName) {
        name = studentName;
    }

    // Getter for name
    string getName() const {
        return name;
    }

    // Setter for rollNumber
    void setRollNumber(int roll) {
        rollNumber = roll;
    }

    // Getter for rollNumber
    int getRollNumber() const {
        return rollNumber;
    }

    // Setter for grade
    void setGrade(double studentGrade) {
        if (studentGrade >= 0 && studentGrade <= 100) {
            grade = studentGrade;
        } else {
            cout << "Invalid grade! Grade should be between 0 and 100." << endl;
        }
    }

    // Getter for grade
    double getGrade() const {
        return grade;
    }

    // Method to determine whether the student passed
    bool isPassed() const {
        return grade >= 50;
    }
};

int main() {
    // Create an object of the Student class
    Student student;

    // Set values using setters
    student.setName("Alice");
    student.setRollNumber(101);
    student.setGrade(72.5);

    // Display student details
    cout << "Student Name: " << student.getName() << endl;
    cout << "Roll Number: " << student.getRollNumber() << endl;
    cout << "Grade: " << student.getGrade() << endl;

    // Check if the student passed
    if (student.isPassed()) {
        cout << "Status: Passed" << endl;
    } else {
        cout << "Status: Failed" << endl;
    }

    return 0;
}
