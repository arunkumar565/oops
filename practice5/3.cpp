#include<iostream>
#include<string>
using namespace std;
class rectangle;
class rectangle{
    private:
    int length;
    int breath;
    public:
     rectangle(int x, int y ){
        length=x;
        breath=y;
     }
 
friend void caculation(rectangle&objrectangle);


};
 void caculation(rectangle&objrectangle){
    int result=objrectangle.length * objrectangle.breath;
    cout<<"area of the rectangle:"<<result<<endl;

 }
 int main(){
    rectangle a1(24,56);
    caculation(a1);


 }
