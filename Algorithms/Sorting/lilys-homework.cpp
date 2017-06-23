// Lily's Homework
// Day #17
// Tuesday, May 16, 2017
// https://www.hackerrank.com/challenges/lilys-homework

#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int find_min(vector<unsigned int>);

int main() {
    
    int num;
    cin >> num;
    
    vector<unsigned int> arr(num);
    
    for (int i = 0; i < num; i++) {
        
        cin >> arr[i];
    
    } // for
    
    int asc_min = find_min(arr);
    
    reverse(arr.begin(), arr.end());
    
    int dsc_min = find_min(arr);
    
    cout << min(asc_min, dsc_min);
    
    return 0;
}

int find_min(vector<unsigned int> arr) {
    
    vector<unsigned int> arr_sorted = arr;
    
    sort(arr_sorted.begin(), arr_sorted.end());
    
    unordered_map<unsigned int, int> indices;
    
    for (int i = 0; i < arr.size(); i++) {
        
        indices[arr[i]] = i;
    
    } // for
    
    int num_swaps = 0;
    
    for (int i = 0; i < arr.size(); i++) {
        
        if (arr[i] != arr_sorted[i]) {
        
            int swap_idx = indices[arr_sorted[i]];

            swap(arr[i], arr[swap_idx]);

            indices[arr[i]] = i;

            indices[arr[swap_idx]] = swap_idx;

            num_swaps++;
            
        } // if
    
    } // for
    
    return num_swaps;
}