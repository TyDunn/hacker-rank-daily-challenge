// Climbing the Leaderboard
// Day #34
// Friday, June 2, 2017
// https://www.hackerrank.com/challenges/climbing-the-leaderboard

#include <stack>
#include <iostream>

using namespace std;

int main(){
    
    unsigned long num_all;  
    cin >> num_all;
    
    unsigned long temp;
    
    stack<unsigned long> scores;
    
    for (unsigned long i = 0; i < num_all; i++) {
        
        cin >> temp;
    
        if (scores.empty() || scores.top() != temp) { scores.push(temp); }
  
    } // for
  
    unsigned long num_alice;  
    cin >> num_alice;
  
    for (unsigned long i = 0; i < num_alice; ++i) {
        
        cin >> temp;
    
        while (!scores.empty() && temp >= scores.top()) { scores.pop(); }
        
        cout << scores.size() + 1 << endl;
        
    }
    
    return 0;

} // main()