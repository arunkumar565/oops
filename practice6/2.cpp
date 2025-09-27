#include<iostream>
#include<string>
using namespace std;
class student{
    private:
    string name;
    int rollnumber;
    int marks;
    public:
    student(){
        name="arunkumar";
        rollnumber=001;
        marks=60;

    }
    student(string name,int rollnumber){
        this->name=name;
        this->rollnumber=rollnumber;
        marks=70;

    }
     student(string name,int rollnumber,int marks){
        this->name=name;
        this->rollnumber=rollnumber;
        this->marks=marks;
        
    }
    void display(){
        cout<<"STUDENT name :"<<this->name<<endl;  
       cout<<"STUDENT rollnumber :"<<this->rollnumber<<endl;
        cout<<"STUDENT marks :"<<this->marks<<endl;
        cout<<"****************************************************"<<endl;
    }


};
int main(){
    student a1;
    student a2("kumar",002);
    student a3("hello",003,80);
    a1.display();
    a2.display(); 
    a3.display();
}