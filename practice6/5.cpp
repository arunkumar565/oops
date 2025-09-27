#include<iostream>
#include<string>
using namespace std;
class car{
    private:
    string brand;
    string price;
    public:
    car(string brand,string price){
        this->brand=brand;
        this->price=price;
    }
    void show(){
        cout<<"car brand :"<<this->brand<<endl;
        cout<<"car price :"<<this->price<<endl; 
    }
    ~car(){
        cout<<"destructor called"<<endl;
    }
};
int main(){
    car c1("bmw","5000000");
    car c2("audi","6000000");
    c1.show();
    c2.show();
    return 0;
}