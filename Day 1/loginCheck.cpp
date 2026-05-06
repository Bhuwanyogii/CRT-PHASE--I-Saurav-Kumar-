/*write a cpp program that  takes two constant variables named user and password
  and then take two variables as input  from the users and check whether the given
  input  variables match from that constant variable or not if matched then give 
  login successfully
*/
#include <iostream>
using namespace std;

int main() {
    
    const string USER = "admin";
    const string PASSWORD = "1234";

    string user, pass;

    cout << "Enter username: ";
    cin >> user;

    cout << "Enter password: ";
    cin >> pass;

    
    if ((user == USER) && (pass == PASSWORD)) {
        cout << "Login Successful";
    } else {
        cout << "Invalid Username or Password";
    }

    return 0;
}