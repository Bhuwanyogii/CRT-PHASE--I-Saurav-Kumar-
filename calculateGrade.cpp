/*write the cpp program that takes student % between 0 to 100 as input 
  and calculate their grade based on the following criteria:
  (a) 90 and above = A grade
  (b) 80-89 = B grade
  (c) 70-79 = C grade
  (d) 60-69 = D grade*/

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the percentage: ";
    cin>>a;

    if(a > 100 || a < 0){
        cout<<"Invalid";
    }
    else if(a >= 90){
        cout<<"A grade.";
    }
    else if(a >= 80){
        cout<<"B grade.";
    }
    else if(a >= 70){
        cout<<"C grade.";
    }
    else if(a >= 60){
        cout<<"D grade.";
    }
    else{
        cout<<"fail";
    }
    return 0;
}