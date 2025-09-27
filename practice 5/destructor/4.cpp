#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor called" << endl;
    }
    ~Demo() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    cout << "Start of main()" << endl;

    {
        Demo obj1;
        cout << "Inside block" << endl;
    }

    cout << "Back to main()" << endl;

    Demo obj2;
    cout << "End of main()" << endl;

    return 0;
}
