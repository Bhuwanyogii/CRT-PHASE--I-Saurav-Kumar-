#include<iostream>
using namespace std;
int sumofDigit(int x){
    //base case
    if(x == 0){
        return 0;
    }
    return (x % 10) + sumofDigit(x/10);
}
int main(){
    int n;
    cin>>n;
    cout<<"Sum of digits of "<<n<<"is: "<<sumofDigit(n)<<endl;
    return 0;
}