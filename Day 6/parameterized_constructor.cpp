#include<iostream>
using namespace std;

class Cricketers{
    public:
    string name;
    int runs;
    double avg;

    // parameterized constructor
    Cricketers(string n, int r, double avg){
        name = n;
        runs = r;
        this->avg = avg;
    }

    //member function
    void show(){
        
    }
};
int main(){
    return 0;
}