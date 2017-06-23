// Find the Median
// Day #14
// Friday, May 12, 2017
// https://www.hackerrank.com/challenges/find-the-median

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int partition(vector<int> & data, int low, int high) {
    
    int temp = low - 1;
    
    for (int i = low; i < high; i++) {
        
        if (data[i] <= data[high]) {
            
            ++temp;
            swap(data[temp], data[i]);
            
        }
        
    }
    
    swap(data[temp+1], data[high]);
    
    return temp + 1;
    
}

void selection_algorithm(vector<int> & data, int left, int right, int median) {
    
        int pivot = partition(data, left, right);

        int length = pivot - left + 1;

        if (median == length) {

            cout << data[pivot];
            return;

        } else if (median < length) {

            right = pivot - 1;

        } else {

            median = median - length;
            left = pivot + 1;
            
        }
    
        selection_algorithm(data, left, right, median);
}

int main() {
    
    int num;
    cin >> num;
    
    vector<int> data(num);
    
    for (int i = 0; i < num; i++) {
        
        cin >> data[i];
        
    } // for
    
    selection_algorithm(data, 0, num - 1, (num / 2) + 1);
    
    return 0;
}
