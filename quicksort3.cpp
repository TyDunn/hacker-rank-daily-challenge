// Quicksort In-Place
// Day #7
// Friday, May 5, 2017
// https://www.hackerrank.com/challenges/quicksort3

#include <vector>
#include <iostream>

using namespace std;

void quicksort(vector<int>&, int, int);
int partition(vector<int>&, int, int);
void swap_elements(vector<int>&, int, int);
void print_array(vector<int>&);

int main() {
    
    int size;
    cin >> size; //  the size of the array
    
    vector<int> data(size); // array
    
    for (int i = 0; i < size; i++) {
        
        cin >> data[i]; // read in elements
        
    } // for
    
    quicksort(data, 0, size - 1);
    
    return 0;
}

// quicksort algorithm
void quicksort(vector<int> & data, int left, int right) {
    
    if (left >= right) { return; }
    
    int pivot = partition(data, left, right);
    
    quicksort(data, left, pivot - 1);
    
    quicksort(data, pivot + 1, right);
    
} // quicksort()

int partition(vector<int> & data, int left, int right) {
    
    int new_pivot = left;
    
    int pivot = data[right];
    
    for (int i = left; i < right; i++) {
        
        if (data[i] <= pivot) {
            
            swap_elements(data, new_pivot, i);
            new_pivot++;
            
        } // if
        
    } // for
    
    swap_elements(data, new_pivot, right);
    
    print_array(data);
    
    return new_pivot;
    
} // partition()

void swap_elements(vector<int> & data, int a, int b) {
    
    int temp = data[b];
    
    data[b] = data[a];
    
    data[a] = temp;
    
} // swap_elements()

void print_array(vector<int> & data) {
    
    for (auto itr = data.begin(); itr != data.end(); itr++) {
        
        cout << *itr << " ";
        
    } // for
    
    cout << endl;
    
} // print_array()