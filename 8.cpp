#include <iostream>
using namespace std;

int main() {
    int a,sum = 0;
    cout << "Enter natural number : ";
    cin >>a;

    for (int i = 1; i <= a; i++) {
        sum= sum +i;
    }
    cout <<"Sum of the natural numbers = " <<sum << endl;

    return 0;
}
