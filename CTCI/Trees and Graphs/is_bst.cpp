#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

struct TreeNode {
	
	TreeNode(int d) : data(d), right(nullptr), left(nullptr) {};

	int data;
	TreeNode * right;
	TreeNode * left;

}; // TreeNode

bool is_bst(TreeNode*);
bool is_bst(TreeNode*, int, int);
TreeNode * build_bst(vector<int>&);
TreeNode * build_bst(vector<int>&, int, int);

int main() {
	
	vector<int> odd = { 1, 2, 3, 4, 5, 6, 7 };
	TreeNode * oddBST = build_bst(odd);

	vector<int> even = { 11, 12, 13, 14, 15, 16, 17, 18 };
	TreeNode * evenBST = build_bst(even);

	vector<int> unsorted = { 3, 4, 2, 10, 22, 3, 7 };
	TreeNode * notBST = build_bst(unsorted);

	vector<int> notDistinct = { 1, 2, 3, 3, 4, 5 };
	TreeNode * alsoNotBST = build_bst(notDistinct);

	(is_bst(oddBST)) ? cout << "BST" << endl : cout << "NOT" << endl;
	(is_bst(evenBST)) ? cout << "BST" << endl : cout << "NOT" << endl;
	(is_bst(notBST)) ? cout << "BST" << endl : cout << "NOT" << endl;
	(is_bst(alsoNotBST)) ? cout << "BST" << endl : cout << "NOT" << endl;

	return 0;

} // main()

bool is_bst(TreeNode * root) {

	return is_bst(root, INT_MIN, INT_MAX);

} // is_bst()

bool is_bst(TreeNode * node, int min, int max) {

	// an empty tree is a BST, return true
	if (node == nullptr) { return true; }

	// if node violates properties of BST, return false
	if (node->data < min || node->data > max) { return false; }

	// check subtrees recursively with new min/max constraints
	return (is_bst(node->left, min, node->data-1) &&
			is_bst(node->right, node->data+1, max));

} // is_bst()

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