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
     friend void swapfunction(aphabets&objaphabets,number&objnumber);
};
class aphabets{
    private:
    string name;
    public:
    aphabets(string y){
        name=y;   

    }
     friend void showdata(aphabets&objaphabet,number&objnumber);
       friend void swapfunction(aphabets&objaphabets,number&objnumber);

    
};
 void showdata(aphabets&objaphabet,number&objnumber){
    cout<<"cobination aphabtes + numbers are: " <<objaphabet.name<<"+"<<objnumber.numberes<<endl;
 }
 void swapfunction(aphabets&objaphabets,number&objnumber){
   void swapfunction(aphabets& objaphabets, number& objnumber) {
    string temp = objaphabets.name;
    objaphabets.name = to_string(objnumber.numberes); // convert int to string
    objnumber.numberes = stoi(temp);                 // convert string to int
}


 }

int main(){
    number n1(999);
    aphabets a2("arunkumar");
   
    cout << "Before swap:" << endl;
    showdata(a2, n1);

    swapfunction(a2, n1);

    cout << "After swap:" << endl;
    showdata(a2, n1);

return 0;
}