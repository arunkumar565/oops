#include<iostream>
#include<string>
using namespace std;
class employee {
    string name;
    double salary;
 public:

void setter(string a,double s){
    name=a;
    salary=s;
}
void getter(){
    cout<<"NAME : "<<name<<endl<<"salary :"<<salary<<endl;
}
};
int main(){
    int num;
    cout<<"Enter the number of employee"<<endl;
    cin>>num;
    employee employees[num];
    for (int i = 0; i < num; i++)
    {
        string c;
        double f;
        cout<<"ENTER THE EMPLYOEE NAME "<<endl;
        cin>>c;
        cout<<"ENTER THE SALARY"<<endl;
        cin>>f;

        
        employees[i].setter(c,f);
       
    }
    cout<<"-------------------"<<endl;
    for (int i = 0; i < num; i++) {
          cout << "Employee " << i + 1 << ": ";
     employees[i].getter(); 
    return 0;

};}