#include<iostream>
using namespace std;
int main(){
     int base, exponent, result = 1;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;
    int i = 0;
    while (i<exponent) {
        result= result*base; 
        i++;
    }

    cout<<base<<"^"<<exponent<<"="<<result<<endl;
    return 0;
}
