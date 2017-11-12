#include <iostream>
#include <vector>

using namespace std;

void quick_sort(vector<int>&);
void quick_sort(vector<int>&, int, int);
int partition(vector<int>&, int, int);

int main() {

	vector<int> arr = { 5, 2, 3, 6, 1, 4, 8, 7 };

	quick_sort(arr);

	for (auto itr : arr) {

		cout << itr << " ";

	} // for

	cout << endl;

	return 0;

} // main()

void quick_sort(vector<int> & arr) {

	quick_sort(arr, 0, arr.size()-1);

} // quick_sort()

void quick_sort(vector<int> & arr, int left, int right) {

	int index = partition(arr, left, right);

	if (left < index-1) {

		quick_sort(arr, left, index-1); // sort left half
	
	} // if

	if (index < right) {

		quick_sort(arr, index, right); // sort right half

	} // if

} // quick_sort()

int partition(vector<int> & arr, int left, int right) {

	int pivot = arr[(left + right) / 2];

	while (left <= right) {

		// find element on left that should be on right
		while (arr[left] < pivot) { left++; }

		// find element on right that should on left
		while (arr[right] > pivot) { right--; }

		// swap elements, and move left and right indicies
		if (left <= right) {

			int temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
			left++;
			right--;

		} // if

	} // while

	return left;

} // partition()