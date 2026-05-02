/*write a cpp program that takes a int input representing the person age use an else if ladder to dertermine and print 
a) eligible to vote 100 and more incentury category
b) eliglible to vote if age is 18 and 99
c) if age is 0 to 18 then ineligible
b) invalid age if age is negative
*/
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Tell me your age: ";
    cin>>age;
    if(age>= 100){
        cout<<"You are in century category";
    }
    else if(age >= 18 && age <= 99){
        cout<<"You are eligible to vote";
    }
    else if(age >= 0 && age <= 17){
        cout<<"You are not eligible to vote";
    }
    else{
        cout<<"age is invalid to vote";
    }

    return 0;
}