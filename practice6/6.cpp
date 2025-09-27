#include<iostream>
#include<string>
using namespace std;
class complex{
    private:
    int real;
    int image;
    public:
  
    complex(int real,int image){
        this->real = real;
        this->image =image;
    }   
    void diplay(){
        cout<<"Complex Number: "<<endl;
        cout<<this->real<<" + "<<this->image<<"i"<<endl;
     
    }
    friend void addcomplexnumber(complex&r1,complex&r2);

};
 void addcomplexnumber(complex&r1,complex&r2){
     cout<<r1.real+r2.real<<" + "<<r1.image+r2.image<<"i"<<endl;
     

}

int main(){
    class complex a1(5, 10);
    class complex a2(7, 8); 
    a1.diplay();
    a2.diplay();
    cout<<"the addition of two complex number :"<<endl;
    addcomplexnumber(a1,a2);
    return 0;

}
