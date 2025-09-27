#include<iostream>
#include<string>
using namespace std;
class accounts{
    private:
    string name;
    int number;
    public:
    accounts(){
 name="arun";
number=0001;
    }
    void display(){
        cout<<"name: "<<name<<endl<<"number"<<number<<endl;
    }

};
int main(){
    accounts a;
    a.display();
    return 0;
}