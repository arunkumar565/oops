#include<iostream>
#include<string>
using namespace std;
class aphabets;
class number{
    private:
    int numberes;
    public:
    number(int x){
        numberes=x;
         
    }
     friend void showdata(aphabets&objaphabets,number&objnumber);
};
class aphabets{
    private:
    string name;
    public:
    aphabets(string y){
        name=y;   

    }
     friend void showdata(aphabets&objaphabet,number&objnumber);

    
};
 void showdata(aphabets&objaphabet,number&objnumber){
    cout<<"cobination aphabtes + numbers are: " <<objaphabet.name<<"+"<<objnumber.numberes<<endl;
 }

int main(){
    number n1(999);
    aphabets a2("arunkumar");
    showdata(a2,n1);
return 0;
}