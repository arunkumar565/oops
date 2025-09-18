#include<iostream>
#include<string>
using namespace std;

class Employee {
private:
    string name;
    int id;
    double salary;
public:
    Employee(string n, int i) {
        name = n;
        id = i;
        salary = 0.0;
        cout << "Employee: " << name << ", ID: " << id << endl;
    }

    Employee(string n, int i, double s) {
        name = n;
        id = i;
        salary = s;
        cout << "Employee: " << name << ", ID: " << id << ", Salary: " << salary << endl;
    }
};

int main() {
    Employee e1("Arun", 101);
    Employee e2("Kumar", 102, 55000);
}
