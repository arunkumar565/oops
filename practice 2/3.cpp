#include<iostream>
using namespace std;
int main(){
    cout<<"enter the number :"<<endl;
    int n;
    cin>>n;
    int i = 1;
    do {
        cout<<n<<"x"<<i<<"="<<n*i<<endl;
        i++;
    } while(i <= 10);
}
