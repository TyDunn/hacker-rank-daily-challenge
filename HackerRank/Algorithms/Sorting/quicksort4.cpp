// Running Time of Quicksort
// Day #8
// Saturday, May 6, 2017
// https://www.hackerrank.com/challenges/quicksort4

#include <vector>
#include <iostream>

using namespace std;

//quicksort
void quicksort(vector<int>&, int, int, int&);
int partition(vector<int>&, int, int, int&);
void swap_elements(vector<int>&, int, int);
void print_array(vector<int>&);
void insertionsort(vector<int>&, int&);

int main() {
    
    int size;
    cin >> size; //  the size of the array
    
    vector<int> q_data(size); // array
    
    for (int i = 0; i < size; i++) {
        
        cin >> q_data[i]; // read in elements
        
    } // for
    
    vector<int> i_data = q_data;
    
    int num_swaps = 0;
    
    quicksort(q_data, 0, size - 1, num_swaps);
    
    int num_shifts = 0;
    
    insertionsort(i_data, num_shifts);
    
    cout << num_shifts - num_swaps;
    
    return 0;
}

// quicksort algorithm
void quicksort(vector<int> & data, int left, int right, int & num_swaps) {
    
    if (left >= right) { return; }
    
    int pivot = partition(data, left, right, num_swaps);
    
    quicksort(data, left, pivot - 1, num_swaps);
    
    quicksort(data, pivot + 1, right, num_swaps);
    
} // quicksort()

int partition(vector<int> & data, int left, int right, int & num_swaps) {
    
    int new_pivot = left;
    
    int pivot = data[right];
    
    for (int i = left; i < right; i++) {
        
        if (data[i] <= pivot) {
            
            swap_elements(data, new_pivot, i);
            new_pivot++;
            num_swaps++;
            
        } // if
        
    } // for
    
    swap_elements(data, new_pivot, right);
    num_swaps++;
    
    return new_pivot;
    
} // partition()

void swap_elements(vector<int> & data, int a, int b) {
    
    int temp = data[b];
    
    data[b] = data[a];
    
    data[a] = temp;
    
} // swap_elements()

void insertionsort(vector<int> & arr, int & num_shifts) {
    
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
    
} // insertionsort()