#include<iostream>
using namespace std;

class player{
    public:
    string name;
    void setName(string n)
    {
        name = n;
    }
};

class Cricketer :public player
{
public:
    int runs;
    void setruns(int r)
    {
        runs = r;
    }

    void show(){
        cout << "Name: " << name << endl;
        cout << "Runs: " << runs << endl;
    }
};

class Footballer : public player{
    int goals;
    void setgoals(int g){
        goals = g;
    }
    void show(){
        cout << "Name: " << name << endl;
        cout << "Goals: " << goals << endl;
    }
};
int main(){
    Cricketer c1;
    c1.setName("Virat");
    c1.setruns(12000);
    c1.show();
    
    Footballer f1;
    c1.setName("Messi");
    c1.setruns(3212);
    c1.show();
    return 0;
}