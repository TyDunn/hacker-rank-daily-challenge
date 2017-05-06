// Quicksort 1 - Partition
// Day #5
// Wednesday, May 3, 2017
// https://www.hackerrank.com/challenges/quicksort1

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
void partition(vector <int>  ar) {
    
    deque<int> partion;
    
    int pivot = ar[0];
    
    partion.push_front(pivot);
    
    for (int i = 1; i < ar.size(); i++) {
        
        if (ar[i] < pivot) {
            
            partion.push_front(ar[i]);
            
        } else {
            
            partion.push_back(ar[i]); // greater than or equal to right
            
        } // if-else
        
    } // for
    
    for (int i; i < partion.size(); i++) {
        
        cout << partion[i] << " ";
        
    } // for
    
}
int main(void) {
   vector <int>  _ar;
   int _ar_size;
   cin >> _ar_size;
    
     for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp); 
    }

   partition(_ar);
   
   return 0;
}