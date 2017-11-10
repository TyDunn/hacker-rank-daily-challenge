#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct TreeNode {
	
	TreeNode(int d) : data(d) {};

	int data;
	TreeNode * right;
	TreeNode * left;

}; // TreeNode

TreeNode * build_bst(vector<int>&);
TreeNode * build_bst(vector<int>&, int, int);
void print_bst(TreeNode*);

int main() {

	vector<int> odd = { 1, 2, 3, 4, 5, 6, 7 };
	TreeNode * oddTree = build_bst(odd);
	print_bst(oddTree);
	cout << endl;

	vector<int> even = { 11, 12, 13, 14, 15, 16, 17, 18 };
	TreeNode * evenTree = build_bst(even);
	print_bst(evenTree);
	cout << endl;

	return 0;

} // main()

TreeNode * build_bst(vector<int> & arr) {

	return build_bst(arr, 0, arr.size()-1);

} // build_bst(arr)

TreeNode * build_bst(vector<int> & arr, int start, int end) {

	if (end < start) { return nullptr; }

	int mid = (start + end) / 2;

	TreeNode * node = new TreeNode(arr[mid]);
	node->left = build_bst(arr, start, mid-1);
	node->right = build_bst(arr, mid+1, end);

	return node;

} // build_bst(arr, start, end)

void print_bst(TreeNode * head) {

	if (head == nullptr) { return; }

	cout << head->data << " ";
	print_bst(head->left);
	print_bst(head->right);

} // print_bst()