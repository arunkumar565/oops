#include <iostream>
using namespace std;

// Base abstract class
class Shape {
public:
   
    virtual double area() = 0;

    
    virtual ~Shape() {}
};

// Derived class: Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        this->radius = r;
    }

    double area() override {
        return 3.14159 * radius * radius;
    }
};

// Derived class: Square
class Square : public Shape {
private:
    double side;

public:
    Square(double s) {
        this->side = s;
    }

    double area() override {
        return side * side;
    }
};

int main() {
    Shape* shape1 = new Circle(5.0);
    Shape* shape2 = new Square(4.0);

    cout << "Area of Circle: " << shape1->area() << endl;
    cout << "Area of Square: " << shape2->area() << endl;

    delete shape1;
    delete shape2;

    return 0;
}
