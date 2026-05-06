/* write a cpp program that takes a  temp value in celcious 
and input from user and convert into farenhit
*/

#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;

    
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    
    fahrenheit = (celsius * 9/5) + 32;

    
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    return 0;
}