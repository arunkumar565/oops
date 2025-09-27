#include<iostream>
#include<string>
using namespace std;
class classes{
    private:
    int a;
    public:
    classes(){
        a=0;
        cout<<"default constructor called"<<endl;
    }
    ~classes(){
        cout<<"destructor called"<<endl;
    }
};
int main(){
    classes c1;
    classes c2;
    return 0;
}
