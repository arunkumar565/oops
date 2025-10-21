#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;

public:
    Person(string n = "") {
        this->name = n;
    }

    void display() {
        cout << "Person Name: " << name << endl;
    }
};

// Base class
class Athlete {
protected:
    string sport;

public:
    Athlete(string s = "") {
        this->sport = s;
    }

    void display() {
        cout << "Sport: " << sport << endl;
    }
};

// Derived class
class SportsPerson : public Person, public Athlete {
public:
    SportsPerson(string n, string s) : Person(n), Athlete(s) {}

   
    void display() {
        Person::display();   
        Athlete::display();  
    }
};

int main() {
    SportsPerson sp("dhoni", "Cricket");
 sp.display();

    return 0;
}
