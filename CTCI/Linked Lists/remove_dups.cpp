#include <iostream>
#include <unordered_map>

using namespace std;

struct Node {
	int data;
	Node * next;
};

void print_list(Node*);
void remove_dups(Node*);
void delete_list(Node*);

int main() {

	Node * Node0 = new Node();
	Node * Node1 = new Node();
	Node * Node2 = new Node();
	Node * Node3 = new Node();
	Node * Node4 = new Node();
	Node * Node5 = new Node();
	Node * Node6 = new Node();

	Node0->data = 10;
	Node0->next = Node1;

	Node1->data = 11;
	Node1->next = Node2;	

	Node2->data = 13;
	Node2->next = Node3;	

	Node3->data = 13;
	Node3->next = Node4;

	Node4->data = 10;
	Node4->next = Node5;		

	Node5->data = 12;
	Node5->next = Node6;	

	Node6->data = 10;
	Node6->next = nullptr;	

	cout << "Original List: ";

	print_list(Node0);

	remove_dups(Node0);

	cout << "List with duplicates removed: ";

	print_list(Node0);

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

void remove_dups(Node * head) {

	unordered_map<int, bool> elements;

	Node * prev = nullptr;

	while (head != nullptr) {

		if (elements[head->data]) {

			prev->next = head->next;
			delete head;

		} else {

			elements[head->data] = true;
			prev = head;

		} // if / else

		head = head->next;

	} // while

} // remove_dups()

void delete_list(Node * head) {

	if (head == nullptr) { return; }

	delete_list(head->next);

	delete head;

} // delete_list()