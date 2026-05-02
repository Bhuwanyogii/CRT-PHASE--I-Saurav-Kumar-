/*Write a program that takes input from user and print all the number till n
which are divisible by 2*/

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Numbers divisible by 2 up to " << n << " are:\n";

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }

    return 0;
}