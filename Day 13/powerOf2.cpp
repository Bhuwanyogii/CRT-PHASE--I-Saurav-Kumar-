#include<iostream>
using namespace std;

bool isPower(int n){
    // base case
    if(n == 0){
        return false;
    }
    if( n == 1) 
    {
        return true;
    }
    return (n%2 == 0) && isPower(n/2);
    
}
int main(){
    int n;
    cout<<"Enter the digit: ";
    cin>>n;
    while(n--){
        int x;
        cout<<"Enter the Number: ";
        cin>>x;
        bool result = isPower(x);
        if(result){
            cout<<x<<" is the power of 2"<<endl;
        }
        else{
            cout<<x<<" is not the power of 2"<<endl;
        }
        
    }
    return 0;
}