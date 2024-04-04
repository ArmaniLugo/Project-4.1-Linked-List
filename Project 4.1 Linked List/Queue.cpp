#include "Queue.h"

void
Queue::
insert(int newValue) {
    data.insertBack(newValue);
}


int
Queue::
remove() {
    return data.removeFront();
}

void Queue::print() {
	data.print();
}
