#include <iostream>
#include "CharStack.h"
using namespace std;

int main() {
    CharStack chStack; // create a stack of chars
    char str[20]; // holds a string

    cout << "Enter a string: ";
    cin >> str;

    char* pt = str; // create pointer to str
    while (*pt) { // push characters onto stack
        chStack.push(*pt);
        pt++;
    }

    cout << "Reversing the string: ";
    while (!chStack.chkEmpty()) 
        cout << chStack.pop();
    cout << endl;
    return 0;
}