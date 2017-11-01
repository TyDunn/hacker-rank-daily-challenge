// Running Time of Algorithms
// Day #4
// Tuesday, May 2, 2017
// https://www.hackerrank.com/challenges/runningtime

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void runningTimeOfAlgorithms(vector<int>&);
void printArray(vector<int>&);

int main() {
    
    int size; // size of array
    cin >> size;
    
    vector<int> arr(size); // a list of numbers that makes up the array
    
    for (int i = 0; i < size; i++) {
        
        cin >> arr[i]; // reading in each number
        
    } // for
    
    runningTimeOfAlgorithms(arr);
    
    return 0;

} // main()

void runningTimeOfAlgorithms(vector<int> & arr) {
    
    int num_shifts = 0;
    
    for (int i = 1; i < arr.size(); i++) {
        
        int value = arr[i];
        
        int j = i - 1;
        
        while (j >= 0 && arr[j] > value) {
            
            arr[j+1] = arr[j];
            
            --j;
            
            ++num_shifts;
            
        } // while
        
        arr[j+1] = value;
        
    } // for
    
    cout << num_shifts << endl;
    
} // runningTimeOfAlgorithms()