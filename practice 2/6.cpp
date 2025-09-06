#include<iostream>
using namespace std;
int main(){
    cout<<"the enter the number:"<<endl;
    int n,fact=1;
    cin>>n;
   
    while(n>0){
        fact=fact*n;
        n--;
    }
     cout<<"the factorial of the number is:"<< fact<<endl;
}
