#include<iostream>
using namespace std;
int main(){    int mark, sum = 0, count = 0;

    cout << "Enter marks: " << endl;
    while (true) {
        cin >> mark;
        if (mark == -1)
            break; 
        sum += mark;
        count++;
    }

    if (count > 0) {
        double average = (double)sum / count;
        cout << "Average marks = " << average << endl;
    } else {
        cout << "No marks entered." << endl;
    }

    return 0;
}
