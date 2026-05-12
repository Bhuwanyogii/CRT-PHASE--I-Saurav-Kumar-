#include<iostream>
using namespace std;

int factorial(int x){
    // base case
    if(x == 1){
        return 1;
    }

    // one case solution
    // return x;

    return x * factorial(x-1);
}
int main(){
    int x;
    cout<<"Enter the number for factorial: ";
    cin>>x;
    cout<<factorial(x);

    return 0;
}