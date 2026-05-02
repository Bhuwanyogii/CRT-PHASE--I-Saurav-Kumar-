/*write the cpp program that takes n int as input print all 
number from 1 to n but skip any number multipe of 3 using continue statement*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the n number: ";
    cin>>n;

    for(int i=0; i<=n ; i++){
        if(i%3 == 0)
            continue;
        else{
            cout<<i<<endl;
        }
    }
    return 0;
}