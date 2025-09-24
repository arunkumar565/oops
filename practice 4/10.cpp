#include<iostream>
#include<string>
using namespace std;
class fraction {
    private:
    int numerator;
    int denominator;
    public:
    fraction(){
        numerator=0;
        denominator=1;
         cout<<"fraction is :"<<numerator<<"/"<<denominator<<endl;
    }
    fraction(int a ){
        numerator=a;
        denominator=1;
        cout<<"fraction is :"<<numerator<<"/"<<denominator<<endl;
    }
    fraction(int a,int b){
     numerator=a;
        denominator=b; 
         cout<<"fraction is :"<<numerator<<"/"<<denominator<<endl;  
    }
};
int main(){
     fraction a1;//
      fraction a2(2);
      fraction a3(3,5);
     
}
