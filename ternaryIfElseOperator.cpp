/*Write a cpp program that take 2 int input from user and find the maximum of two using ternary conditonal operator
*/

#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout<<"write the first number ";
    cin>>a;
    cout<<"write the second number ";
    cin>>b;

    int max = (a>b)?a:b;
    cout<<"Maximum number is: "<<max<<endl;

    return 0;
}