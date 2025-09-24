#include<iostream>
#include<string>
using namespace std;

class bankaccount{
    private:
    string username;
    double balance;
    public:
     void setbalance(string n,double b){
        username=n;
        balance=b;
     }
     void display(){
        cout<<"username: "<<username<<endl;
        cout<<"balance: "<<balance<<endl;
     }
};
int main(){
    bankaccount b1;
    string name;
    double bal;
    cout<<"enter username: ";
    cin>>name;
    cout<<"enter balance: ";
    cin>>bal;
    b1.setbalance(name,bal);
    b1.display();
    return 0;
}