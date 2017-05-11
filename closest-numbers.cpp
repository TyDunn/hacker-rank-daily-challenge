// Closest Numbers
// Day #13
// Thursday, May 11, 2017
// https://www.hackerrank.com/challenges/closest-numbers

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int num;
    cin >> num;
    
    vector<int> data(num);
    
    for (int i = 0; i < num; i++) {
        
        cin >> data[i];
        
    } // for
    
    sort(data.begin(), data.end());
    
    int smallestDiff = data[1] - data[0];
    
    vector<int> smallestDiffInts;
    smallestDiffInts.push_back(data[0]);
    smallestDiffInts.push_back(data[1]);
    
    for (int j = 2; j < num; j++) {
        
        if (data[j] - data[j-1] < smallestDiff) {
            
            smallestDiffInts.clear();
            smallestDiffInts.push_back(data[j-1]);
            smallestDiffInts.push_back(data[j]);
            smallestDiff = data[j] - data[j-1];
            
        } else if (data[j] - data[j-1] == smallestDiff) {
            
            smallestDiffInts.push_back(data[j-1]);
            smallestDiffInts.push_back(data[j]);
            
        } // if / else if
        
    } // for
    
    for (auto itr = smallestDiffInts.begin(); itr != smallestDiffInts.end(); itr++) {
        
        cout << *itr << " ";
        
    } // for
    
    return 0;
}