#include<iostream>
#include<string>
using namespace std;
class time{
    private:
    double hour;
    double minute;
      double second;
    public:
    time(){
       hour=0;
        minute=0;
        second=0;
        cout<<"hour :"<<hour<<endl<<"minute :"<<minute<<endl<<"second :"<<second<<endl;
cout<<"_____________________________________________________________________________________"<<endl;
    }
  time(double q,double f,double r){
        hour=q;
        minute=f;
        second=r;
         cout<<"hour :"<<hour<<endl<<"minute :"<<minute<<endl<<"second :"<<second<<endl;
cout<<"_____________________________________________________________________________________"<<endl;
    }
    

};
int main(){
  time a1;
  time a2(2,3,0);
  time a3(2,3,4);



}
