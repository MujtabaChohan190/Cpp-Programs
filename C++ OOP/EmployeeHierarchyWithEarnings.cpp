/*Task 3: Create a base class Employee with protected data members: name and salary.
Derive two classes:
● Manager (add bonus attribute).
● Intern (add hoursWorked attribute).
Write a method in each class to calculate total earnings:
● For Manager: salary + bonus.
● For Intern: hoursWorked * hourlyRate.
Test both classes in the main function.*/

#include <iostream>
using namespace std;

// Base class: Employee
class Employee {
protected:
    string name;
    double salary;

public:
    // Constructor to initialize name and salary
    Employee(string empName, double empSalary) {
        name = empName;
        salary = empSalary;
    }

    // Setter for name
    void setName(string empName) {
        name = empName;
    }

    // Getter for name
    string getName() const {
        return name;
    }

    // Setter for salary
    void setSalary(double empSalary) {
        if (empSalary >= 0) {
            salary = empSalary;
        } else {
            cout << "Salary must be positive!" << endl;
        }
    }

    // Getter for salary
    double getSalary() const {
        return salary;
    }
};

// Derived class: Manager
class Manager : public Employee {
private:
    double bonus;

public:
    // Constructor to initialize name, salary, and bonus
    Manager(string empName, double empSalary, double empBonus)
        : Employee(empName, empSalary) {
        bonus = empBonus;
    }

    // Setter for bonus
    void setBonus(double empBonus) {
        if (empBonus >= 0) {
            bonus = empBonus;
        } else {
            cout << "Bonus must be positive!" << endl;
        }
    }

    // Getter for bonus
    double getBonus() const {
        return bonus;
    }

    // Method to calculate total earnings (salary + bonus)
    double calculateTotalEarnings() const {
        return salary + bonus;
    }
};

// Derived class: Intern
class Intern : public Employee {
private:
    int hoursWorked;
    double hourlyRate;

public:
    // Constructor to initialize name, salary, hours worked, and hourly rate
    Intern(string empName, double empSalary, int empHours, double empRate)
        : Employee(empName, empSalary) {
        hoursWorked = empHours;
        hourlyRate = empRate;
    }

    // Setter for hours worked
    void setHoursWorked(int empHours) {
        if (empHours >= 0) {
            hoursWorked = empHours;
        } else {
            cout << "Hours worked must be positive!" << endl;
        }
    }

    // Setter for hourly rate
    void setHourlyRate(double empRate) {
        if (empRate > 0) {
            hourlyRate = empRate;
        } else {
            cout << "Hourly rate must be positive!" << endl;
        }
    }

    // Getter for hours worked
    int getHoursWorked() const {
        return hoursWorked;
    }

    // Getter for hourly rate
    double getHourlyRate() const {
        return hourlyRate;
    }

    // Method to calculate total earnings (hours worked * hourly rate)
    double calculateTotalEarnings() const {
        return hoursWorked * hourlyRate;
    }
};

int main() {
    // Create a Manager object
    Manager manager("Alice", 80000, 10000);
    cout << "Manager Details:" << endl;
    cout << "Name: " << manager.getName() << endl;
    cout << "Base Salary: " << manager.getSalary() << endl;
    cout << "Bonus: " << manager.getBonus() << endl;
    cout << "Total Earnings: " << manager.calculateTotalEarnings() << endl;
    cout << endl;

    // Create an Intern object
    Intern intern("Bob", 0, 40, 20);  // Salary is 0, but earnings depend on hourly rate and hours worked
    cout << "Intern Details:" << endl;
    cout << "Name: " << intern.getName() << endl;
    cout << "Hours Worked: " << intern.getHoursWorked() << endl;
    cout << "Hourly Rate: " << intern.getHourlyRate() << endl;
    cout << "Total Earnings: " << intern.calculateTotalEarnings() << endl;

    return 0;
}
