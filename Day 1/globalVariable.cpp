/*write  a cpp program that declares a global integer variables
 in the main func take integer input from the user.
 perform floating point divsion of the global variable
  by the user input using explicit type casting store it double
*/
#include <iostream>
using namespace std;

// Global integer variable
int globalVar = 100;

int main() {
    int userInput;
    double result;

 
    cout << "Enter an integer value: ";
    cin >> userInput;

    result = (double)globalVar / userInput;

    cout << "Result of division: " << result << endl;

    return 0;
}