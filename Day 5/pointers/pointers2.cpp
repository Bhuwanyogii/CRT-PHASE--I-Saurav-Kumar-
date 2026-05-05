#include<iostream>
using namespace std;
int main(){
    int value = 20;
    int *ptr = &value;

    cout<<"Address: "<<ptr<<endl;
    cout<<"Value: "<<*ptr<<endl;

    *ptr = 60;
    cout<<"Value: "<<*ptr<<endl;
}