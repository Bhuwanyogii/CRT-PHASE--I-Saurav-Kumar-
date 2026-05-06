#include<iostream>
using namespace std;
class area{
public:
    int length;
    int width;
    float r;

    //default
    area(){
        length = 0;
        width = 0;
    }
    area(int l, int w){
        length = l;
        width = w;
    }
    area(int s){
        length = s;
        width = s;
    }
        

    // member function
    void show(){
        cout<<"Area of Rectangle:" << length*width<<endl;
        
    }
};
int main(){
    area a1;
    a1.show();
    area a2(5,10);
    a2.show();
    area a3(2);
    a3.show();
return 0;
}