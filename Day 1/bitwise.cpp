/*write a cpp program that takes two integer input
 a and b multiply a by 4  wing bitwise  left shift operator. 
 print the value of a
 */
#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    cout << "Enter two integers: ";
    cin >> a >> b;

    // Multiply a by 4 using left shift
    a = a << 2;

    cout << "Value of a after multiplying by 4: " << a;

    return 0;
}