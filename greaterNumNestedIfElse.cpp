/*write a cpp program that take three distinct int 
as an input and find the largest among them using nested conditional statement*/
#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"write the first number ";
    cin>>a;
    cout<<"write the second number ";
    cin>>b;
    cout<<"write the third number ";
    cin>>c;

    if(a > b){
        if(a > c){
            cout<<"first number is largest";
        }
        else{
            cout<<"third number is largest";
        }
    }
    else{
        if(b > c){
            cout<<"second number is largest";
        }
        else{
            cout<<"third number is largest";
        }
    }
    return 0;
}