#include<iostream>
using namespace std;   
int main(){
    int n,rev=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    while (n>0)
    {
   int digit;
    digit=n%10;
    rev=rev*10+digit;
    n=n/10;
    
    }
   cout<<"the reverse number is "<<rev<<endl; 

    
};