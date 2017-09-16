// Find the Running Median
// Day #112
// Friday, September 15, 2017
// https://www.hackerrank.com/challenges/find-the-running-median

#include <queue>
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    
    cout << setprecision(1);
    
    int num;
    cin >> num;
    
    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;
    
    double median;
    
    for (int i = 0; i < num; i++) {
        
        int current;
        cin >> current;
        
        /* INSERT VALUE */
        if (maxHeap.empty()) {
            
            maxHeap.push(current);
            
        } else if (current > maxHeap.top()) {
            
            minHeap.push(current);
            
        } else if (minHeap.empty()) {
            
            minHeap.push(maxHeap.top());
            maxHeap.pop();
            maxHeap.push(current);
            
        } else {
            
            maxHeap.push(current);
            
        } // if / else if / else if / else
        
        /* BALANCE HEAPS */
        if (abs((int) maxHeap.size() - (int) minHeap.size()) > 1) {
            
            if (maxHeap.size() > minHeap.size()) {
                
                minHeap.push(maxHeap.top());
                maxHeap.pop();
                
            } else {
                
                maxHeap.push(minHeap.top());
                minHeap.pop();
                
            } // if / else
            
        } // if
        
        if ((maxHeap.size() + minHeap.size()) % 2 == 0) {
            
           median = (maxHeap.top() + minHeap.top());
           median /= 2;
            
        } else if (minHeap.empty()) {
            
            median = maxHeap.top();
            
        } else if (minHeap.size() < maxHeap.size()) {
            
            median = maxHeap.top();
            
        } else {
            
            median = minHeap.top();
            
        } // if / else
        
        cout << fixed << median << endl;
        
    } // for
    
    return 0;
    
} // main()