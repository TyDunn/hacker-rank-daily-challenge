#include <iostream>

using namespace std;

struct Node {
	int data;
	Node * next;
};

void detect_loop(Node*);

int main() {

	Node * Node0 = new Node();
	Node * Node1 = new Node();
	Node * Node2 = new Node();
	Node * Node3 = new Node();
	Node * Node4 = new Node();
	Node * Node5 = new Node();
	Node * Node6 = new Node();

	Node0->data = 7;
	Node0->next = Node1;

	Node1->data = 6;
	Node1->next = Node2;	

	Node2->data = 5;
	Node2->next = Node3;	

	Node3->data = 4;
	Node3->next = Node4;

	Node4->data = 3;
	Node4->next = Node5;		

	Node5->data = 2;
	Node5->next = Node6;	

	Node6->data = 1;
	Node6->next = Node3;

	detect_loop(Node0);

	return 0;

} // main()

void detect_loop(Node * head) {

	Node * slow = head;
	Node * fast = head;

	// Find meeting point, which will be 
	// LOOP_SIZE - k steps into linked list
	while (fast != nullptr && fast->next != nullptr) {

		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast) { break; }

	} // while

	// Error check for no loop
	if (fast == nullptr || fast->next == nullptr) { return; }

	// Move slow to head, keep fast at meeting point
	// Each are k steps from loop start, move both at same pace
	slow = head;

	while (slow != fast) {

		slow = slow->next;
		fast = fast->next;

	} // while

	cout << "Intersection: " << fast->data << endl;

} // detect_loop()