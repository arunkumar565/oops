#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    void setName(string n) {
        name = n;
    }
    string getName() {
        return name;
    }
    void setAge(int a) {
        if (a > 0)  
            age = a;
        else
            cout << "Invalid age!" << endl;
    }
    int getAge() {
        return age;
    }
};

int main() {
    Student s1;
    s1.setName("Arun");
    s1.setAge(20);
    cout << "Student Name: " << s1.getName() << endl;
    cout << "Student Age: " << s1.getAge() << endl;

    return 0;
}
