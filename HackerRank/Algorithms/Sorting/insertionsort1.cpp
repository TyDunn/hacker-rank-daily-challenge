// Insertion Sort - Part 1
// Day #2
// Saturday, April 29, 2017
// https://www.hackerrank.com/challenges/insertionsort1

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int size = 0; // size of array
    cin >> size; // reading in size
    
    vector<int> arr(size); // unsorted array of integers
    
    for (int i = 0; i < size; i++) {
        
        cin >> arr[i]; // reading in every number
        
    } // for i < size
    
    int current = size - 1; // position of unsorted number
    int unsorted_value = arr[current]; // value of unsorted number
    
    bool sorted = false; // array not sorted
    arr[current] = arr[current - 1]; // shifting last sorted item
    
    while (!sorted) {
        
        if (current != 0 && arr[current - 1] > unsorted_value) {
            
            arr[current] = arr[current - 1]; // shifting right
            --current; // moving left

        } else {

            arr[current] = unsorted_value; // inserting unsorted value
            sorted = true; // array sorted

        } // if-else

        for (int j = 0; j < size; j++) {

            cout << arr[j] << " "; // outputting current state of array

        } // for j < size

        cout << endl; // new line
        
    } // while not sorted
    
    return 0;
    
} // main()
