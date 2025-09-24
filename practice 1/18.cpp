#include<iostream>
using namespace std;   
int main(){
    int n,orginal,rev=0;
    cout<<"enter the number"<<endl;
    cin>>n; 
    orginal=n;
     while (n>0)
    {
   int digit;
    digit=n%10;
    rev=rev*10+digit;
    n=n/10;

    
};
if (orginal==rev){
    cout<<"the number is palindrome "<<endl;
}
else{
    cout<<"the number is not a palindrome "<<endl;
}
};