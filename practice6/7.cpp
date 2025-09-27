#include<iostream>
#include<string>
using namespace std;
class counters{
    private:
    int count;
    public:
    static int counter;
    counters(){
        
count=counter++;
       cout<<"count :"<<count<<endl;

    }

};
int counters::counter=1;
int main(){
    counters a1;
    counters a2;
    counters a3;
    cout<<"the number of the objec created are :"<<counters::counter<<endl;

}