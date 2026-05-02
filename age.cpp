// write the cpp program that take person age as an input , if the age is 18 or older then this person is eligible to vote
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter the person age: ";
    cin>>age;
    if(age >= 18){
        cout<<"you are eligible to vote";
    }
    else{
        cout<<"you are not eligible to vote";
    }
    return 0;
}