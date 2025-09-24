#include<iostream>
using namespace std;
int main(){
    cout<<"the enter the number"<<endl;
    int n,rev=0;
    cin>>n;
    do 
{
     int digit;
    digit=n%10;
    rev=rev*10+digit;
    n=n/10;
}   
while(n>0);
   cout<<"the reverse number is "<<rev<<endl;

}
