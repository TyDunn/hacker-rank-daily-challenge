#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print_list(vector<int>&);
void merge_sort(vector<int>&);
void merge_sort(vector<int>&, vector<int>&, int, int);
void merge(vector<int>&, vector<int>&, int, int, int);

int main() {

	vector<int> arr = { 0, 5, 2, 9, 3, 1, 8, 4, 7, 6 };

	print_list(arr);

	merge_sort(arr);

	print_list(arr);

	return 0;

} // main()

void print_list(vector<int> & arr) {

	for (auto itr : arr) {

		cout << itr << " ";

	} // for

	cout << endl;

} // print_list()

void merge_sort(vector<int> & arr) {

	vector<int> helper(arr.size());

	merge_sort(arr, helper, 0, arr.size() - 1);

} // merge_sort()

void merge_sort(vector<int> & arr, vector<int> & helper, int low, int high) {

	if (low < high) {

		int middle = (low + high) / 2;
		merge_sort(arr, helper, low, middle); // sort left half
		merge_sort(arr, helper, middle + 1, high); // sort right half
		merge(arr, helper, low, middle, high); // merge them

	} // if

} // merge_sort()


void merge(vector<int> & arr, vector<int> & helper, int low, int middle, int high) {

	copy(arr.begin(), arr.end(), helper.begin());

	int helperLeft = low;
	int helperRight = middle + 1;
	int current = low;

	while (helperLeft <= middle && helperRight <= high) {

		if (helper[helperLeft] <= helper[helperRight]) {

			arr[current] = helper[helperLeft];
			++helperLeft;

		} else {

			arr[current] = helper[helperRight];
			++helperRight;

		} // if / else

		++current;

	} // while

	int remaining = middle - helperLeft;

	for (int i = 0; i <= remaining; i++) {

		arr[current + i] = helper[helperLeft + i];

	} // for

} // merge()