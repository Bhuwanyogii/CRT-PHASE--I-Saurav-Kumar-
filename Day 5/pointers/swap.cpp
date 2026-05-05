// Swap 2 number using pointer
#include<iostream>
using namespace std;
void swapNUm(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    cout<<"Enter the value of a: ";
    int a,b;
    cin>>a;
    
    cout<<"Enter the value of b: ";
    cin>>b;
    swapNUm(&a,&b);
    cout<<a<<endl;
    cout<<b<<endl;
}