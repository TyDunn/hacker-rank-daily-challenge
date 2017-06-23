// Big Sorting
// Day #9
// Sunday, May 7, 2017
// https://www.hackerrank.com/challenges/big-sorting

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool comparator(string s1,string s2){
    
    int s1_size = s1.size();
    
    int s2_size = s2.size();
    
    int diff = s1.compare(s2);
   
    if (s1_size == s2_size) { return (diff < 0); }
    
    return (s1_size < s2_size);
}

int main() {
    
    int num;
    cin>>num;
    
    vector<string> arr(num);
    
    for (int i = 0; i < num; i++) { 
        
        cin >> arr[i]; 
    
    } // for
    
    sort(arr.begin(), arr.end(), comparator);
    
    for (int i = 0; i < num; i++){ 
        
        cout << arr[i] << endl; 
    
    } // for
    
    return 0;
}