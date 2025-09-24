#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter integers: ";
      cin >> a;
     cout << "Enter integers: ";
      cin >> b;   
     cout << "Enter integers: ";
      cin >> c;

    if (a >= b && a >= c)
        cout << "Largest number: " <<a<<endl;
    else if (b >= a && b >= c)
        cout << "Largest number: " <<b<<endl;
    else
        cout << "Largest number: " <<c<<endl;

    return 0;
}
