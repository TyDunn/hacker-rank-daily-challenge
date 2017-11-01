// Counting Sort 2
// Day #10
// Monday, May 8, 2017
// https://www.hackerrank.com/challenges/countingsort2

#include <vector>
#include <iostream>

using namespace std;

void print_occurences(vector<int> &);

int main() {
    
    int num;
    cin >> num;
    
    int element;
    vector<int> occurences(100);
    
    for (int i = 0; i < num; i++) {
        
        cin >> element;
        
        ++occurences[element];
        
    } // for
    
    print_occurences(occurences);
    
    return 0;
}

void print_occurences(vector<int> & occurences) {
    
    for (int i = 0; i < 100; i++) {
        
        int num_occ = occurences[i];
        
        for (int j = 0; j < num_occ; j++) {
            
            cout << i << " ";
            
        } // for j < occurences[i]
        
    } // for i < 100
    
} // print_occurences()