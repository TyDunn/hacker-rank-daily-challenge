// The Full Counting Sort
// Day #12
// Wednesday, May 10, 2017
// https://www.hackerrank.com/challenges/countingsort4

#include <unordered_map>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int num;
    cin >> num;
        
    unordered_map<int, vector<string>> data;
    int index;
    string element;
    
    for (int i = 0; i < num; i++) {
        
        cin >> index;
        cin >> element;
        
        if (i < num / 2) {
            
            element = "-";
            
        } // if
        
        data[index].push_back(element);
        
    } // for
    
    for (int i = 0; i < 100; i++) {
    
        for (auto itr = data[i].begin(); itr != data[i].end(); itr++) {
            
            cout << *itr << " ";
            
        } // for
        
    } // for
        
    return 0;
}
