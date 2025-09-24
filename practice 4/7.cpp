#include<iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;
public:
    Distance() {
        feet = 0;
        inches = 0;
        cout << "Distance: " << feet << " feet " << inches << " inches" << endl;
    }

    Distance(int f) {
        feet = f;
        inches = 0;
        cout << "Distance: " << feet << " feet " << inches << " inches" << endl;
    }

    Distance(int f, int i) {
        feet = f;
        inches = i;
        cout << "Distance: " << feet << " feet " << inches << " inches" << endl;
    }
};

int main() {
    Distance d1;
    Distance d2(5);
    Distance d3(6, 8);
}
