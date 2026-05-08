#include<iostream>
using namespace std;

class ATM{
    private:
        int balance;

    public:
    // Encapsulation
    void setBalance(int balance){
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
    int getBalance(){
        return balance;
    }
};
int main(){
    cout<<"Enter your Balance: ";
    int n;
    cin>>n;
    ATM a;
    a.setBalance(n);
    cout<<"Balance is :"<<a.getBalance()<<endl;
    a.Withdraw(500);
    cout << "Balance is:" << a.getBalance() << endl;    
    return 0;
}