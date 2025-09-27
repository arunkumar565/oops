#include <iostream>
using namespace std;

class Array {
private:
    int* data;
    int size;

public:
    Array(int s) {
        size = s;
        data = new int[size];
        cout << "Constructor: Array of size " << size << " created" << endl;
    }

    ~Array() {
        delete[] data;
        cout << "Destructor: Array of size " << size << " destroyed" << endl;
    }
};

int main() {
    Array arr1(5);
    Array arr2(10);
    cout << "Objects created" << endl;
    return 0;
}
