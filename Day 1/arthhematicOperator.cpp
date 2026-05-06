/*write a cpp  program that takes two number and operators as the input 
from the users perform the corresponding arithematic operation
 and print the result( do'nt use if else)
*/
#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    switch(op) {
        case '+':
            cout << "Result: " << a + b;
            break;

        case '-':
            cout << "Result: " << a - b;
            break;

        case '*':
            cout << "Result: " << a * b;
            break;

        case '/':
            cout << "Result: " << a / b;
            break;

        default:
            cout << "Invalid operator";
    }

    return 0;
}