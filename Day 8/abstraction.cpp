#include<iostream>
using namespace std;

class ATM{
    private:
    int balance;
    public:
    ATM(int balance){
        this->balance = balance;
    }
    // withdraw method of atm
    void Withdraw(int amount){
        if(amount > balance){
            cout<<"Insufficient Balance"<<endl;

        }
        else{
            balance -= amount;
            cout<<"Amount Withdrawn: "<<amount<<endl;
        }
    }
    void ShowBalance(){
        cout<<"Remaining Balance: "<<balance<<endl;
    }
};
int main(){
    ATM a(5000);
    a.ShowBalance();
    a.Withdraw(500);
    a.ShowBalance();
    return 0;
}