#include <iostream>

using namespace std;

struct Node {
	int data;
	Node * next;
};

void print_list(Node*);
void delete_list(Node*);
Node * find_kth_to_last(Node*, int);

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
	Node6->next = nullptr;	

	cout << "Original List: ";

	print_list(Node0);

	cout << "Please enter k (1 to n): ";

	int k;
	cin >> k;

	cout << endl;

	Node * k_to_last = find_kth_to_last(Node0, k);

	if (!k_to_last) { 

		cout << "k must be greater than 0 and less than or equal to n!" << endl; 
	
	} else { 
	
		cout << k << "th to last element: " << k_to_last->data << endl << endl;

	} // if / else

	delete_list(Node0);

	return 0;

} // main()

void print_list(Node * head) {

	while (head != nullptr) {

		cout << head->data << " ";
		head = head->next;

	} // while

	cout << endl << endl;

} // print_list()

void delete_list(Node * head) {

	if (head == nullptr) { return; }

	delete_list(head->next);

	delete head;

} // delete_list()

Node * find_kth_to_last(Node * head, int k) {

	Node * front = head;
	Node * back = head;

	for (int i = 0; i < k; i++) {

		if (front == nullptr) { return nullptr; }
		front = front->next;

	} // for

	while (front != nullptr) {

		front = front->next;
		back = back->next;

	} // while

	return back;

} // find_kth_to_last()