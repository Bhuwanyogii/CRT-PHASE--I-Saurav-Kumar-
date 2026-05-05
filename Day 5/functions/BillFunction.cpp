/*write the function that apply 10% discount using refereces, 
update the original amount and print the updated bill*/

#include<iostream>
using namespace std;
void applydisc(double &bill){
    bill = bill - (bill * 0.10);
}
int main(){
    double bill;
    cout<<"Write the original amount: ";
    cin>>bill;
    cout<<"Original amount is: ";
    cout<<bill<<endl;
    applydisc(bill);
    cout<<"After 10% discount: ";
    cout<<bill<<endl;
    return 0;

}