// 2D Array - DS
// Day #120
// Sunday, September 24, 2017
// https://www.hackerrank.com/challenges/2d-array

#include <vector>
#include <iostream>

using namespace std;


int main(){
    
    vector<vector<int>> arr(6,vector<int>(6));
    
    for(int i = 0; i < 6; i++){
    
        for(int j = 0; j < 6; j++){
        
            cin >> arr[i][j];
       
        } // for
    
    } // for
    
    int max = arr[0][0] + arr[0][1] + arr[0][2] + 
                          arr[1][1] + 
              arr[2][0] + arr[2][1] + arr[2][2];
    
    for (int i = 0; i < arr.size() - 2; i++) {
        
        for (int j = 0; j < arr.size() - 2; j++) {
            
            int val = arr[i][j] + arr[i][j+1] + arr[i][j+2] + 
                          arr[i+1][j+1] + 
                      arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            
            if (val > max) { max = val; }
            
        } // for j
        
    } // for i

    cout << max << endl;
    
    return 0;
    
} // main()