#include <iostream>
using namespace std;

int main() {
    cout << "Prime numbers between 1 to 100 are:" << endl;

    for (int n = 2; n <= 100; n++) {
        int i;  
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                break;
            }
        }
        if (i == n) {
            cout << n <<endl;
        }
    }

    return 0;
}
