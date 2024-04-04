#include "LinkedList.h"


// inserts new Nodes at the front of the list
void LinkedList::insertFront(int newValue) {
    // L.insertFront(2);
    // Node with the value 2 and then point that new node at head
    Node* newNode = new Node(newValue);
    Node* oldHead = LinkedList::head;// save the old head
    newNode->next = oldHead;// point the new node at the old head
    LinkedList::head = newNode;// overwrite

    // now deal with the tail
    // if is empty
    if (size == 0) {
        tail = head;
    } else {
        // nothing! tail doesn't change
    }

    size++;
}

// inserting newValue node at ... front or back?
void LinkedList::insertBack(int newValue) {
    // 1 -> 2 ->3 and insert 4
	// 1 -> 2 ->3 -> 4
    
    // 1. make a newNode
    Node* newNode = new Node(newValue);

    // A -> B and we're adding C
    // tail is currently (b4 add) B
    // tail->next = new node
    // tail = new node;

    // 3. check size for adjusting head
    if (size == 0) {
		// 2. point the tail at newNode 
        // if it's empty, then tail->next will fail
		head = tail = newNode;// old tail now points to 
    }
    else {
        tail->next = newNode;
		tail = newNode;
        // head does not change in this case
    }
    size++;
}

int LinkedList::removeFront() {
    // what if it's empty? ERROR
    // but if not empty? we get a value
    // size == 0
    // size == 1 then you must make it empty
    // size > 1, then you must set head to be haed->next
    Node* oldHead = head;
    if (oldHead == nullptr) {
        throw std::logic_error("can't remove from empty front");// throw an error
    }
    else if (head == tail) {// only 
        head = nullptr;
        tail = nullptr;
    } else {// if numNodes > 1
        head = oldHead->next;// head becomes the thing after it
    }
    int value2return = oldHead->data;
    delete oldHead;// returns memory that we allocated with 'new'
    size--;
    return value2return;// TODO
}
int LinkedList::removeBack() {
    return -1;// didn't even need to do this! so we didn't
}

// traverse a linked list
// as long as we have something after the current thing, we can continue looping
void LinkedList::print() {
    std::cout << "LL print of " << size << " nodes: \n";
    // loop through all the nodes
    for (Node* curr = LinkedList::head; 
        curr != nullptr; 
        curr = curr->next) 
    {
        std::cout << curr->data << ' ';
    }
    std::cout << '\n';
}