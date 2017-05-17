// Counting Sort 3
// Day #11
// Tuesday, May 9, 2017
// https://www.hackerrank.com/challenges/countingsort3

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void print_occurences(vector<int> &);

int main() {
    
    int num;
    cin >> num;
    
    string garbage;
    int element;
    vector<int> occurences(100);
    
    for (int i = 0; i < num; i++) {
        
        cin >> element; // int
        
        ++occurences[element];
        
        cin >> garbage; // string
        
    } // for
    
    print_occurences(occurences);
    
    return 0;    
    
    return 0;
}

void print_occurences(vector<int> & occurences) {
    
    int current_total = 0;
    
    for (int i = 0; i < 100; i++) {
        
        current_total += occurences[i];
        
        cout << current_total << " ";
        
    } // for i < 100
    
} // print_occurences()