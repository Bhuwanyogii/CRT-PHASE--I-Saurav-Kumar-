/*write a cpp program that takes three integer input represting
 the side of triagles or print true if triange is 
 euqileteral otherwise false. use only relational and operators
*/
#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three sides of triangle: ";
    cin >> a >> b >> c;

    
    
    if ((a == b) && (b == c)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}