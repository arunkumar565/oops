#include<iostream>
#include<string>
using namespace std;
class counts{
    static int counter;
    public:
    
    counts(){
        counter++;

    }
    
    static int counterValue() {
        return counter;
    }


};
int counts::counter=0;
int main(){
    counts a1;
    counts a2;
    counts a3;
 
    
   


    cout<<  "the number of object created : "<<counts::counterValue()<<endl;
    
}