#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    //` Constructor to initialize person name and age
    Person(string n = "", int a = 0) {
       
        this->name = n;
        this->age = a;
    }
// Print person details
    void displayPersonInfo() {
        cout << "Name: " << this->name << ", Age: " << this->age << endl;
    }
};

class Employee : public Person {
protected:
    string empID;
    double salary;

public:
  
    Employee(string n, int a, string id, double s) : Person(n, a) {
     
        this->empID = id;
        this->salary = s;
    }

    
    void displayEmployeeInfo() {
        cout << "Employee ID: " << this->empID << ", Salary: " << this->salary << endl;
    }
};

class Manager : public Employee {
private:
    string department;

public:
    // Constructor - initialize all base parts and set department
    Manager(string n, int a, string id, double s, string dept)
        : Employee(n, a, id, s) {
        // which department this manager is responsible for
        this->department = dept;
    }

    // Print manager-specific info (department)
    void displayManagerInfo() {
        cout << "Department: " << this->department << endl;
    }
};


int main() { 
    Manager mr("run", 30, "x001", 75000.0, "data science");

   
    mr.displayPersonInfo();    
    mr.displayEmployeeInfo();  
    mr.displayManagerInfo();   

    return 0;
}
