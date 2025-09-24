#include<iostream>
#include<string>
using namespace std;
class books {
    private:
    string name;
    double price;
    public:
    void setters(string a,double b){
 name=a;
 price=b;

    }
    void getters(){
        cout<<"book name"<<endl<<name<<endl<<" price"<<endl<<price<<endl;
    }
};

int main(){
    books b1;
    string c;
    double d;
   
    cout<<"enter the book name "<<endl;
    cin>>c;
    cout<<"enter the price"<<endl;
    cin>>d;
    b1.setters(c,d);
    b1.getters();
    return 0;

};