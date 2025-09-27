#include<iostream>
#include<string>
using namespace std;
class accounts{
    private:
    int number;

    string name;
    public:
    accounts(){
        name="unknown";
        number=233432;

    }
    accounts(string name){
        this->name=name;
        this->number=999990;

    }

    accounts(string name,int number){
        this->name=name;
        this->number=number;

    }
  void diplay(){
        cout<<"name: "<<this->name<<endl<<"number :"<<this->number<<endl;
    }
};

    int main(){
        accounts a1;
        accounts a2("arunkumar");
        accounts a3("devil",64539);
        a2.diplay();
        a3.diplay();
        a1.diplay();
   
    }