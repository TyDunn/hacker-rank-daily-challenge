// Jesse and Cookies
// Day #119
// Friday, September 22, 2017
// https://www.hackerrank.com/challenges/jesse-and-cookies

#include <vector>
#include <iostream>
#include <queue>

using namespace std;

int main() {
    
    int num, thd;
    cin >> num >> thd;
    
    priority_queue<int, vector<int>, greater<int>> pq;
    
    for (int i = 0; i < num; i++) {
        
        int temp;
        cin >> temp;
        pq.push(temp);
        
    } // for
    
    int ops = 0;
    
    while (pq.size() > 1) {
        
        if (pq.top() >= thd) { break; }
        
        int first = pq.top();
        pq.pop();
        int second = pq.top();
        pq.pop();
        
        int swt = first + (2 * second);
        
        pq.push(swt);
        ++ops;
        
    } // while()
    
    if (pq.top() < thd) { ops = -1; }
    
    cout << ops << endl;
    
    return 0;
    
} // main()