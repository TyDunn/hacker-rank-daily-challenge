// Quicksort 2 - Sorting
// Day #6
// Thursday, May 4, 2017
// https://www.hackerrank.com/challenges/quicksort2

#include <bits/stdc++.h>
using namespace std;

vector<int> quickSort(vector <int> &arr, int arr_size) {
    
    if (arr.size() <= 1) {
        
        return arr;
        
    } // if
    
    vector<int> right, left;
    
    int pivot = arr[0];
    
    for (int i = 1; i < arr_size; i++) {
        
        if (arr[i] <= pivot) {
            
            left.push_back(arr[i]);
            
        } else {
            
            right.push_back(arr[i]);
            
        } // else greater than or equal to pivot
        
    } // for
    
    left = quickSort(left, left.size());
    
    right = quickSort(right, right.size());
    
    left.push_back(pivot);
    
    for (int i = 0; i < right.size(); i++) {
        
        left.push_back(right[i]);
    
    } // for
        
    for (int i = 0; i < arr_size; i++) {
        
        cout << left[i] << " ";
        
    } // for
    
    cout << endl;
    
    return left;
    
} // quickSort()

int main() {
    int n;
    cin >> n;

    vector <int> arr(n);
    
    for(int i = 0; i < n; ++i) {
    
        cin >> arr[i];
    
    } // for

    quickSort(arr, arr.size());

    return 0;
}