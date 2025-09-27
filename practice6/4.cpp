#include<iostream>
using namespace std;

class rectangle {
private:
    int length;
    int breadth;

public:
    rectangle(int length, int breadth) {
        this->length = length;
        this->breadth = breadth;
    }

    int area() {
        return length * breadth;
    }

    friend void compare(rectangle &r1, rectangle &r2);
};

void compare(rectangle &r1, rectangle &r2) {
    int area1 = r1.area();
    int area2 = r2.area();

    if (area1 > area2) {
        cout << "Rectangle 1 is larger with area: " << area1 << endl;
    } else if (area2 > area1) {
        cout << "Rectangle 2 is larger with area: " << area2 << endl;
    } else {
        cout << "Both rectangles have equal area: " << area1 << endl;
    }
}

int main() {
    rectangle r1(10, 5);
    rectangle r2(7, 8);

    cout << "Area of Rectangle 1: " << r1.area() << endl;
    cout << "Area of Rectangle 2: " << r2.area() << endl;

    compare(r1, r2);

    return 0;
}
