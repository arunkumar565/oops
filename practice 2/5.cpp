#include<iostream>
using namespace std;
int main(){
    cout<<"enter the number"<<endl;
    int n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
       sum=sum+i;
    }
    cout<<"the sum of the n natural numbers are:" <<sum<<endl;
}
