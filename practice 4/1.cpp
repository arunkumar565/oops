#include<iostream>
#include<string>
using namespace std;
class rectangle{
    private:
    double length,breath;
    public:
     rectangle(double a,double b){
        length=a;
    breath=b;     }
    void result (){
         double area;
         area=length*breath;
         cout<<"area of the recatngle :"<<area<<endl;
    }

};
int main(){
    double n,m;
    cout<<"enter the length of the rectangle"<<endl;
    cin>>n;
    cout<<"enter the breath of the rectangle"<<endl;
    cin>>m;
    rectangle s1(n,m);
    s1.result();

};
