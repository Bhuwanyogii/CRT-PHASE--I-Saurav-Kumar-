#include<iostream>
using namespace std;

class Employee{
    public:
    static int regNO;
    Employee(){
        regNO++;
    }
    static void show(){
        cout<<"Employee Reg No is: "<<regNO<<endl;
    }
};
int Employee :: regNO = 100;
int main(){
    Employee E1;
    Employee E2;
    Employee E3;
    Employee E4;
    Employee :: show();
    return 0;
}