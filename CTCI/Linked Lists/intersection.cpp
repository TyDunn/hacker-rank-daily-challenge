#include <iostream>
#include <cmath>

using namespace std;

struct Node {
	int data;
	Node * next;
};

struct Result {
	int size;
	Node * tail;
};

void print_list(Node*);
Node * find_intersection(Node*, Node*);
Result * get_tail_and_size(Node*);
Node * getKthNode(Node*, int);
void print_intersection(Node*);

int main() {

	Node * Node0 = new Node();
	Node * Node1 = new Node();
	Node * Node2 = new Node();
	Node * Node3 = new Node();
	Node * Node4 = new Node();
	Node * Node5 = new Node();
	Node * Node6 = new Node();
	Node * Node7 = new Node();
	Node * Node8 = new Node();
	Node * Node9 = new Node();

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

	Node7->data = 8;
	Node7->next = Node8;

	Node8->data = 0;
	Node8->next = Node4;

	Node9->data = 9;
	Node9->next = nullptr;

	cout << endl;
	cout << "List 1: ";
	print_list(Node0);

	cout << "List 2: ";
	print_list(Node7);

	cout << "List 3: ";
	print_list(Node9);

	Node * intersection1 = find_intersection(Node0, Node7);
	Node * intersection2 = find_intersection(Node0, Node9);

	cout << "List 1 & 2" << endl;
	print_intersection(intersection1);
	cout << endl;

	cout << "List 1 & 3" << endl;
	print_intersection(intersection2);
	cout << endl;

	return 0;

} // main()

void print_list(Node * head) {

	while (head != nullptr) {

		cout << head->data << " ";
		head = head->next;

	} // while

	cout << endl << endl;

} // print_list()

Node * find_intersection(Node * list1, Node * list2) {

	if (list1 == nullptr || list2 == nullptr) { return nullptr; }

	/* get tail ans sizes */
	Result * result1 = get_tail_and_size(list1);
	Result * result2 = get_tail_and_size(list2);

	/* if tails are not the same, no intersection */
	if (result1->tail != result2->tail) { return nullptr; }

	/* set pointers to start of each list */
	Node * shorter = result1->size < result2->size ? list1 : list2;
	Node * longer = result1->size < result2->size ? list2 : list1;

	/* advance pointer for longer linked list by difference of lengths */
	longer = getKthNode(longer, abs(result1->size - result2->size));

	/* move both pointers until you have a collision */
	while (shorter != longer) {

		shorter = shorter->next;
		longer = longer->next;

	} // while

	delete result1;
	delete result2;

	/* return intersection */
	return longer;

} // find_intersection()

Result * get_tail_and_size(Node * head) {

	Result * result = new Result();

	if (head == nullptr) { return nullptr; }

	result->size = 1;
	result->tail = head;

	while (result->tail->next != nullptr) {

		result->size++;
		result->tail = result->tail->next;

	} // while

	return result;

} // get_tail_and_size()

Node * getKthNode(Node * head, int k) {

	while (k > 0 && head != nullptr) {

		head = head->next;
		k--;

	} // while

	return head;

} // getKthNode()

void print_intersection(Node * intersection) {

	if (intersection == nullptr) {

		cout << "Intersection: None" << endl;

	} else {

		cout << "Intersection: " << intersection->data << endl;

	} // if / else

} // print_intersection()