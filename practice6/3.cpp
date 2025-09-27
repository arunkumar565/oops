#include<iostream>
#include<string>
using namespace std;
class employee{
    private:
    int id;
    int salary;
    public:
    static int counter;
    employee(int id,int salary){
        this->id=id;
        this->salary=salary;
        counter++;
    }
    void diplay(){
        cout<<"employee id :"<<this->id<<endl;
        cout<<"employee salary :"<<this->salary<<endl;

    }
    static int  counters(){
 
    return counter;
   }

};
int employee::counter=0;
int main(){
    employee a1(01,10000);
    employee a2(02,10000);
    employee a3(03,50000);
    a1.diplay();
    a2.diplay();
    a3.diplay();
    cout<<"number of employee :"<<employee::counters()<<endl;


}