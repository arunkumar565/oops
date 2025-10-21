#include <iostream>
using namespace std;


class Shape {
public:
    // Virtual function run-time polymorphism
    virtual void area() {
        cout << "Area of generic shape is unknown." << endl;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) {
        this->length = l;
        this->width = w;
    }

    // Function overriding (run-time polymorphism)
    void area() override {
        cout << "Area of rectangle: " << length * width << endl;
    }
};


class MathOperations {
public:
    // Function overloading: same function name, different parameters
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};


int main() {
  
    MathOperations math;
    cout << "Sum of 2 integers: " << math.add(5, 10) << endl;
    cout << "Sum of 2 doubles: " << math.add(3.5, 4.5) << endl;
    cout << "Sum of 3 integers: " << math.add(1, 2, 3) << endl;



   
    Shape* shapePtr;       
    Rectangle rect(5.0, 3.0);
    shapePtr = &rect;


    shapePtr->area();

    return 0;
}
