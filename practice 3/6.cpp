#include<iostream>
#include<string>
using namespace std;
class cars {
    string name;
    double price;
 public:

void setter(string a,double s){
    name=a;
    price=s;
}
void getter(){
    cout<<"NAME : "<<name<<endl<<"price :"<<price<<endl;
}
};
int main(){
    int num;
    cout<<"Enter the number of car"<<endl;
    cin>>num;
    cars car[num];
    for (int i = 0; i < num; i++)
    {
        string c;
        double f;
        cout<<"ENTER THE CAR NAME "<<endl;
        cin>>c;
        cout<<"ENTER THE PRICE"<<endl;
        cin>>f;
car[i].setter(c,f);
       
    }
    cout<<"-------------------"<<endl;
    for (int i = 0; i < num; i++) {
          cout << "car " << i + 1 << ": ";
     car[i].getter(); 


};
    return 0;
}