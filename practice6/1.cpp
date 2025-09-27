#include<iostream>
#include<string>
using namespace std;
class bankaccount{
    private:
    int accountnumber;
    int balance;
    public:
    static int interest;
    bankaccount(int accountnumber,int balance){
        this->accountnumber=accountnumber;
        this->balance=balance; 
        int interset;
        
    }
    void deposite(int depo){
        balance=balance+depo;
        cout<<"account number :"<< this->accountnumber<<endl;
        cout<<"balance :"<<this->balance<<endl;
    }
     void withdraw(int width){
        balance=balance-width;
        cout<<"account number :"<< this->accountnumber<<endl;
        cout<<"balance :"<<this->balance<<endl;
    }
    friend void simpleinterset(bankaccount&obj);
    

};
void simpleinterset(bankaccount&obj){
    int simple;
    simple=(obj.balance*obj.interest/100);
      obj.balance += simple; 
    cout << "Interest Applied: " << simple << endl;
    cout << "New Balance: " << obj.balance << endl;
  
}
 
int bankaccount::interest=5;

int main(){
  bankaccount a1(01,10000);
  a1.withdraw(5000);
  simpleinterset(a1);

  bankaccount a2(01,90000);
  a2.deposite(5000);
   simpleinterset(a2);

  
}