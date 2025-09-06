#include<iostream>
using namespace std;
int main(){
    int num,reversed=0,remainder,original;

    cout<<"Enter a number: ";
    cin>>num;

    original=num;

 
    for(int temp=num;temp>0;temp/=10){
        remainder=temp%10;
        reversed=reversed*10+remainder;
    }


    if (original == reversed)
        cout << original << " is a Palindrome number." << endl;
    else
        cout << original << " is NOT a Palindrome number." << endl;

    return 0;
}
