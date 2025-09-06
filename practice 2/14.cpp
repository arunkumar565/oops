#include<iostream>
using namespace std;
int main(){
    int num, digit, largest = 0;

    cout << "Enter a number: ";
    cin >> num;

    int temp = num;

    do {
        digit = temp % 10;        
        if (digit > largest) {
            largest = digit;     
        temp /= 10;               
    } 
   
 } while (temp > 0);

    cout << "The largest digit in " << num << " is " << largest << endl;

    return 0;
}
