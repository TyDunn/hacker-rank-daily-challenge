// Service Lane
// Day #64
// Friday, July 7, 2017
// https://www.hackerrank.com/challenges/service-lane

#include <vector>
#include <iostream>

using namespace std;


int main() {
    
    int free_len;
    cin >> free_len;
    
    int num_tests;
    cin >> num_tests;
    
    vector<int> freeway(free_len);
    
    for (int i = 0; i < free_len; i++) {
        
        cin >> freeway[i];
        
    } // for
    
    for (int i = 0; i < num_tests; i++) {
        
        int lar_veh = 3;
        
        int start, end;
        cin >> start >> end;
        
        for (int j = start; j <= end; j++) {
            
            if (freeway[j] < lar_veh) {
                
                lar_veh = freeway[j];
                
            } // if
            
        } // for
        
        cout << lar_veh << endl;
        
    } // for
    
    return 0;
    
} // main()