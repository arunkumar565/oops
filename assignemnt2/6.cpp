#include <iostream>
using namespace std;

// Forward declaration 
class Sports;

class Student {
private:
    string name;
    int marks;

public:
    Student(string n, int m) {
        this->name = n;
        this->marks = m;
    }

    // Declare a friend function
    friend void displayTotal(const Student &s, const Sports &sp);
};

class Sports {
private:
    string sportName;
    int score;

public:
    Sports(string s, int sc) {
        this->sportName = s;
        this->score = sc;
    }

    // Declare the same friend function
    friend void displayTotal(const Student &s, const Sports &sp);
};

// Friend function definition
void displayTotal(const Student &s, const Sports &sp) {
    cout << "Student Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;
    cout << "Sport: " << sp.sportName << endl;
    cout << "Score: " << sp.score << endl;

    int total = s.marks + sp.score;
    cout << "Total : " << total << endl;
}

int main() {
    Student stu("dhoni", 85);
    Sports sp("Cricket", 90);

   
    displayTotal(stu, sp);

    return 0;
}
