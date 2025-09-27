#include <iostream>
using namespace std;

class Tracker {
    static int callCount;   
public:
    static void functionCall() {  
        callCount++;            
        cout << "Function called " << callCount << " times" << endl;
    }
};


int Tracker::callCount = 0;

int main() {
  
    Tracker::functionCall();
    Tracker::functionCall();
    Tracker::functionCall();

    return 0;
}
