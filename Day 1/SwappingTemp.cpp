/*write a cpp program  that takes two integer as input from the users swap their
 values using a temprory variable and print the updated value
*/
#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    cout << "Enter two integers: ";
    cin >> a >> b;

    
    temp = a;
    a = b;
    b = temp;

    cout << "After swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}

// using XOR
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two integers: ";
    cin >> a >> b;

    // Swapping using XOR
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "After swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}