#include<iostream>
#include<string>
using namespace std;
class areacricle{
    private:
    int radius;
    public:
    static double pi ;
    areacricle(int radius){
        this->radius=radius;
    }
    int area(){
        return pi*radius*radius;
    }

};
double areacricle::pi=3.14;
int main(){
    areacricle a1(5);
    areacricle a2(10);
    cout<<"area of circle 1 :"<<a1.area()<<endl;
    cout<<"area of circle 2 :"<<a2.area()<<endl;
}