// Insertion Sort - Part 2
// Day #3
// Sunday, April 30, 2017
// https://www.hackerrank.com/challenges/insertionsort2

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void insertionSort(vector<int>&);
void printArray(vector<int>&);

int main() {
    
    int size; // size of array
    cin >> size;
    
    vector<int> arr(size); // a list of numbers that makes up the array
    
    for (int i = 0; i < size; i++) {
        
        cin >> arr[i]; // reading in each number
        
    } // for
    
    insertionSort(arr); // sorts array
    
    return 0;

} // main()

void insertionSort(vector<int> & arr) {
    
    int size = arr.size();
    
    int i = 1;
    
    int temp;
    
    while (i < size) {
        
        temp = arr[i];
        
        int j = 0;
        
        while (temp > arr[j]) {
            
            j++;
            
        } // while temp > arr[j]
        
        for (int k = i; k > j; k--) {
            
            arr[k] = arr[k-1];
            
        } // for k < j
        
        arr[j] = temp;
        
        printArray(arr);
        
        i++;
        
    } // while i < size
    
} // insertionSort()

void printArray(vector<int> & arr) {
    
    for (int i = 0; i < arr.size(); i++) {
        
        cout << arr[i] << " ";
        
    } // for
    
    cout << endl;
    
} // printArray()