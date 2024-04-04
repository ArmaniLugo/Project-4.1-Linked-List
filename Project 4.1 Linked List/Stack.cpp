#include "Stack.h"


    // insert: we always insert to the 'top' of the stack (front of the LL)
    // ex: Stack stack; stack.insert(101);
void 
Stack::
insert(int newValue) {
    data.insertFront(newValue);
}
    
    
int 
Stack::
remove() {
    return data.removeFront(); // TODO: MUST CHANGE
}

// print
//  Stack s; s.print();
void Stack::print() {
    data.print();
}


