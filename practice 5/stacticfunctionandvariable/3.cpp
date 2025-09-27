#include<iostream>
#include<string>
using namespace std;
class bankaccounts{
    private:
    string name;
    int number;
    int money;
    int interest;
    public:
    static int rate;
    static int time;

    bankaccounts(string name,int number,int money){
        this->name=name;
          this->number=number;
            this->money=money;
    }
    void simpleinterset(){
        interest=this->number* this->money*time*rate/100;
        cout<<"account name :"<<this->name<<endl;
        cout<<"account number :"<<this->number<<endl;
        cout<<"account blance :"<<this->money<<endl;
        cout<<"the simple intersets:"<<interest<<endl;
        cout<<"****************************************************"<<endl;

    }

};
int bankaccounts::rate=5;
int bankaccounts::time=3;
int main(){
   bankaccounts a1("arunkumar",4000,5000);
   bankaccounts a2("kumar",5000,6000);
   bankaccounts a3("hellow",6000,4800);
   a1.simpleinterset();
   a2.simpleinterset();
   a3.simpleinterset();

    
    

}

