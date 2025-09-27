#include<iostream>
#include<string>
using namespace std;
class complex{
    private:
    int real;
    int image;
    public:
    complex(){
       this-> real = 0;
        this->image = 0;
    }
    complex(int real, int image){
        this->real = real;
        this->image = 34;
    }
    complex(int real){
        this->real = real;
        this->image =image;
    }   
    void diplay(){
        cout<<"Complex Number: "<<endl;
        cout<<this->real<<" + "<<this->image<<"i"<<endl;
     
    }

};
int main(){
    complex c1;
    complex c2(5, 10);
    complex c3(7);
    
    c1.diplay();
    c2.diplay();
    c3.diplay();
    
    return 0;
}
