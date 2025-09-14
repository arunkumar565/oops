#include<iostream>
#include<string>
using namespace std;
class area {
    private:
    double length , breath ;
    public :
    double area;
    void  setters (double a, double b){
        length=a;
        breath=b;
        area=length*breath;
    };
    void getter(){
        cout<<"area of the rectangle :"<< " "<< area<<endl;

    };

};

int main(){
    area a1;
    double c,e;
    cout<<"Enter the length of the recatngle"<<endl;
    cin>>c;
    cout<<"Enter the breath of the recatngle"<<endl;
    cin>>e;
    a1.setters(c,e);
    a1.getter();


};