/*write a cpp program that takes three integer  a input from the
 users calculate thier total sum and average and print them
*/
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    double sum, avg;

    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    
    sum = a + b + c;

    
    avg = sum / 3;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg << endl;

    return 0;
}