/*write a cpp program that continuously take positive input 
from the user and add them to running the sum variable if
the user enter the negative number to imideatly terminate
the loop using break statement and print the final sum*/

#include<iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;

    while(true) {
        cout << "Enter a number : ";
        cin >> num;

        if(num < 0) {
            break;  // terminate loop immediately
        }

        sum += num;  // add to running sum
    }

    cout << "Final sum is: " << sum;

    return 0;
}