#include<iostream>
#include<string>
using namespace std;
class bankaccount{
    private:
    double number;
    double balance;
    public:
    bankaccount(){
        number=0000;
        balance=10000;
        cout<<"account number :"<<number<<endl<<"account balance :"<<balance<<endl;

    }
    bankaccount(double q){
        number=q;
        cout<<"account number :"<<number<<endl;
    }
     bankaccount(double e,double f){
        number=e;
        balance=f;
        cout<<"account number :"<<number<<endl<<"account balance :"<<balance<<endl;
    }
};
int main(){
    bankaccount a1;
   bankaccount a2(0001,2000);
   bankaccount a3(0002,23488);



}
