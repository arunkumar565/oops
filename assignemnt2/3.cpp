#include <iostream>
using namespace std;

// Base class
class Shape {
protected:
    double width;
    double length;

public:
    // Constructor to initialize width and length
    Shape(double width, double length) {
        this->width = width;     
        this->length = length;
    }

    // Method to display dimensions
    void displayDimensions() {
        cout << "Width: " << this->width << ", Length: " << this->length << endl;
    }
};

// Derived class
class Rectangle : public Shape {
public:
    // Constructor
    Rectangle(double width, double length) : Shape(width, length) {}

  
    double area() {
        return this->width * this->length;
    }

    
    double perimeter() {
        return 2 * (this->width + this->length);
    }
};

int main() {

    Rectangle rect(5.0, 3.0);

 
    rect.displayDimensions();

 
    cout << "Area of rectangle: " << rect.area() << endl;
    cout << "Perimeter of rectangle: " << rect.perimeter() << endl;

    return 0;
}
