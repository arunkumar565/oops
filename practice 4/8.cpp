#include<iostream>
#include<string>
using namespace std;

class Car {
private:
    string brand;
    string model;
    double price;
public:
    Car(string b) {
        brand = b;
        model = "Unknown";
        price = 0.0;
        cout << "Car: " << brand << endl;
    }

    Car(string b, string m) {
        brand = b;
        model = m;
        price = 0.0;
        cout << "Car: " << brand << " " << model << endl;
    }

    Car(string b, string m, double p) {
        brand = b;
        model = m;
        price = p;
        cout << "Car: " << brand << " " << model << ", Price: " << price << endl;
    }
};

int main() {
    Car c1("Hyundai");
    Car c2("Hyundai", "i20");
    Car c3("Hyundai", "i20 Sportz", 950000);
}
