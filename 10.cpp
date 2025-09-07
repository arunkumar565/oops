#include<iostream>
using namespace std;   
int main(){
    int a;
    cout<<"enter the  the years"<<endl;
    cin>>a;
    if(a%4==0||(a % 4 == 0 && a % 100 != 0)){
        cout<<"the year is leap year"<<endl;
    }
    else{
        cout<<"the year is not a leap year"<<endl;
    }
    return 0;
};