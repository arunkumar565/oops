#include <iostream>
using namespace std;

class Temperature {
private:
    double celsius;

public:
    void setCelsius(double c) {
        celsius = c;
    }

    double getFahrenheit() {
        return (celsius * 9.0 / 5.0) + 32;
    }
};

int main() {
    Temperature t;
    double c;

    cout << "Enter temperature in Celsius: ";
    cin >> c;

    t.setCelsius(c);

    cout << "Temperature in Fahrenheit: " << t.getFahrenheit() << endl;

    return 0;
}
