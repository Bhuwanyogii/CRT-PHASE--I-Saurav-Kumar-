// write a funtion with default argument and calling it with or without parameter
#include<iostream>
using namespace std;
int add(int a, int b = 10){
    int sum = a + b;
    return sum;
}
int main(){
    int a, b;
    cout<<"Write first value: ";
    cin>>a;

    
    cout<<"Write second value: ";
    cin>>b;


    cout<<"sum of the values are: "<<add(a,b)<<endl;
    cout<<"sum of the values are: "<<add(a);

    return 0;
}