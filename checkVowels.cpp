/*write a program that takes an single alphabet character form the user and determine wether it is vowel or consonant*/
#include<iostream>
using namespace std;
int main(){
    char ch;

    cout << "Enter an alphabet: ";
    cin >> ch;

    switch(ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << "It is a vowel";
            break;

        default:
            if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                cout << "It is a consonant";
            } else {
                cout << "Invalid input";
            }
    }
    return 0;

}