#include<iostream>
using namespace std;
class student{
    //data member
    public:
    string name;
    int rollNo;

    // default constructor
    student(){
        name = "Riya";
        rollNo = 1;
    }

    // print
    void show(){
        cout<<name<<endl;
        cout<<rollNo<<endl;
        cout<<"Default constructor is called."<<endl;
    }
};
int main(){
    student s1;
    s1.show();
    return 0;
}