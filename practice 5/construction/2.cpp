#include<iostream>
#include<string>
using namespace std;
class accounts{
    private:
    int number;

    string name;
    public:
    accounts(string name,int number){
        this->name=name;
        this->number=number;

    }
    void diplay(){
        cout<<"name: "<<this->name<<endl<<"number :"<<this->number<<endl;
    }

};
int main(){
    string name;
    int number;
    cout<<"enter the name :"<<endl;
    cin>> name;
      cout<<"enter the number :"<<endl;
    cin>> number;

    accounts a(name,number);
    a.diplay();
}