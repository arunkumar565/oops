#include<iostream>
using namespace std;   
int main(){
    float p,r,t;
    cout<<"enter the principle amounts ";
    cin>>p;
    cout<<"enter the interest rate";
    cin>>r;
    cout<<"enter the time in years";
    cin>>t;
    float si;
    si=(p*r*t)/100;
    cout<<"the simple interest is "<<si<<endl;

    
};