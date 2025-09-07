#include<iostream>
using namespace std;   
int main(){
    int n,a1=0,a2=1,nextTerm=0;
    cout<<"enter the number of n terms "<<endl;
    cin>>n;
    cout<<"fibonacci series "<<endl;
    for(int i=1;i<=n;i++){
        cout<<a1<<endl;
        nextTerm=a1+a2;
        a1=a2;
        a2=nextTerm;

    };
    }