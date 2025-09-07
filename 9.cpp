#include <iostream>
using namespace std;

int main() {
    int a,fact=1;
    cout << "Enter a number: ";
    cin >>a;
    for (int i = 1; i <= a; i++) {
        fact*= i;
    }
    cout<<"Factorial= "<<fact<<endl;
    return 0;
}
