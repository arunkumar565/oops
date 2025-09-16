#include<iostream>
#include<string>
using namespace std;
class student{
    string name;
    double age;
    double mark;
    public:
    student(){
        name="tommy";
        age=19;
        mark=95;

        cout<<"default constructor"<<endl<<name<<endl<<age<<endl<<mark<<endl;
         
    }

    student(string z,double a,double b){
        name=z;
        age=a;
        mark=b;

 cout<<"paramirezied constructor"<<endl<<name<<endl<<age<<endl<<mark<<endl;
    }

};
int main(){
    string x;
    double n,m;
    cout<<"enter the name"<<endl;
    cin>>x;
      cout<<"enter the age"<<endl;
    cin>>n;
      cout<<"enter the mark"<<endl;
    cin>>m;
    student b1;
    student(x,n,m);
}