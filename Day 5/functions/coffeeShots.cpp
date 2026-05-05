/* write a function that takes no. of coffee shots 
return the total no. of coffee vol if 1 shot = 30ml */
#include<iostream>
using namespace std;
int noOfCoffeeShots(int a){
    int coffeeVol = 30 * a;
    cout<<"Total Number of coffee vol is: "<< coffeeVol;
}
int main(){
    cout<<"Enter the Number of Coffee Shots: ";
    int a;
    cin>>a;
    int coffeeShots = noOfCoffeeShots(a);
    return 0;
}