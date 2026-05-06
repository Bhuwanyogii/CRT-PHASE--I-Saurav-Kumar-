#include<iostream>
using namespace std;

class studentDetails{
    public:
        // data member
        string name;
        int rollNo;
    
    // member function
    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Roll NUmber:"<<rollNo<<endl;
    }
};

int main(){
    studentDetails s1;
    s1.name = "Aryan";
    s1.rollNo = 123;
    s1.display();
    return 0;
}