#include <iostream>
using namespace std;

class Circle {
private:
    double radius;   
public:

    void setRadius(double r) {
        radius = r;
    }

    double getRadius() {
        return radius;
    }

    
    double getArea() {
        double r = getRadius();      
        return 3.14159 * r * r;     
    }
};

int main() {
    Circle c1;
    double r;

    cout << "Enter the radius of the circle: ";
    cin >> r;

    c1.setRadius(r);

    cout << "Radius: " << c1.getRadius() << endl;
    cout << "Area: " << c1.getArea() << endl;

    return 0;
}
