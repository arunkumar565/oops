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
    accounts(accounts&copy){
        name=copy.name;
        number=copy.number;
    }
    void display(){
        cout<<"name: "<<this->name<<endl<<"number :"<<this->number<<endl;
    }

};
int main(){
    accounts a1;
    accounts a2 (a1);
    a1.display();
    a2.display();
    return 0;
}