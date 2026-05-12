#include<iostream>
using namespace std;

int recursion(int n){
    // base case
    if(n > 10){
        return 0;
    }

    cout<<n<<endl;
    // recursion solution
   return  recursion(n+1);

}
int main(){
   recursion(1);

    return 0;
}