#include "ListNode.h"

int main(void) {

// Create head
ListNode<int> *head = new ListNode<int>();

// Now: |head|->(NULL)

// Create node
ListNode<int> *node  = new ListNode<int>();

//Set previous of node to head
node->prev = head;
// Set data of node to 1
node->data = new int(1);

// Set next of head to node
head->next = node;

// Now: |head|->|node|->(NULL)

return 0;
};
