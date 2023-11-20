class CharStack {
    enum { size = 20 }; // size of stack
    int top; // location of top of stack
    char buf[size]; // array to hold stack
public:
    CharStack() { top = size; } // initialize stack
    bool push(char ch); // push character on stack
    char pop(); // pop character from stack
    int chkFull() const {
        return !top;
    } // is stack full?
    int chkEmpty() const {
        return top == size;
    } // is stack empty?
};