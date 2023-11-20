#include <iostream>
#include "CharStack.h"
using namespace std;

/* Push method for CharStack */
bool CharStack::push(char ch) {
    if (top == 0) {
        cout << "Stack is full\n";
        return false;
    }
    buf[--top] = ch;
    return true;
}

/* Pop method for CharStack */
char CharStack::pop() {
    if (chkEmpty()) {
        cout << "Stack is empty\n";
        return 0;
    }
    return buf[top++];
}

