//Simple Node for implementing doubly linked list
template <typename T>
class ListNode {
public:
   ListNode() : next(0),
		prev(0),
		data(0)
		{}
   ListNode<T>* next;
   ListNode<T>* prev;
   T* data;
};
