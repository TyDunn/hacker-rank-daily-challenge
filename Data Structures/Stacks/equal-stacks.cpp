// Equal Stacks
// Day #116
// Tuesday, September 19, 2017
// https://www.hackerrank.com/challenges/equal-stacks

#include <unordered_map>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    
    int sizeOne, sizeTwo, sizeThree;
    cin >> sizeOne >> sizeTwo >> sizeThree;

    vector<int> first(sizeOne);
    vector<int> second(sizeTwo);
    vector<int> third(sizeThree);
    
    for (int i = 0; i < sizeOne; i++) { cin >> first[i]; }
    reverse(first.begin(), first.end());
    
    for (int i = 0; i < sizeTwo; i++) { cin >> second[i]; }
    reverse(second.begin(), second.end());
    
    for (int i = 0; i < sizeThree; i++) { cin >> third[i]; }
    reverse(third.begin(), third.end());
    
    int sum = 0;
    unordered_map<int, bool> one;
    
    for (auto itr : first) {
        
        sum += itr;
        
        one[sum] = true;
        
    } // for
    
    sum = 0;
    unordered_map<int, bool> oneTwo;
    
    for (auto itr : second) {
  
        sum += itr;
        
        if (one[sum]) {
            
            oneTwo[sum] = true;
            
        } // if
        
    } // for
    
    sum = 0;
    int lc = 0;
    
    for (auto itr : third) {
        
        sum += itr;
        
        if (oneTwo[sum]) {
            
            lc = sum;
            
        } // for
        
    } // for
    
    cout << lc << endl;
    
    return 0;

} // for