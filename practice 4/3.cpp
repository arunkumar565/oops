#include<iostream>
#include<string>
using namespace std;
class complex{
    private:
    int real,imag,com;
    public:
    // Default constructor
    complex() {
        real = 0;
        imag = 0;
        cout << "complex number :" << real << " + " << imag << "i" << endl;
    }

    // Constructor with one argument
    complex(int r) {
        real = r;
        imag = 0;
        cout << "complex number :" << real << endl;
    }

    // Constructor with two arguments
    complex(int r, int i) {
        real = r;
        imag = i;
        
        cout << "complex number :" << real << " + " << imag << "i" << endl;
    }

};
int main(){
    complex a1;
    complex a2(3);
    complex a3(0,5);
}