#include<iostream>
using namespace std;

class studentDetails{
    private:
        int registration = 33000;
    public:
        // data member
        string name;
        int rollNo;
    
    // member function
    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Roll NUmber:"<<rollNo<<endl;
        cout<<"Register Number: "<<registration++<<endl;
    }
};

int main(){
    studentDetails s1;
    s1.name = "Aryan";
    s1.rollNo = 123;
    s1.display();
    cout<<endl;

    studentDetails s2;
    s1.name = "Ajay";
    s1.rollNo = 125;
    s1.display();
    return 0;
}