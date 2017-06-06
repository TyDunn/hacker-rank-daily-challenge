// Utopian Tree
// Day #37
// Sunday, June 4, 2017
// https://www.hackerrank.com/challenges/utopian-tree

#include <cmath>
#include <vector>
#include <iostream>

using namespace std;


int main() {
    
    int num;
    cin >> num;
    
    int height = 0;
    
    int temp;
    
    for (int i = 0; i < num; i++){
        
        cin >> temp;
       
        if (temp % 2 == 0) {
            
            height = (int)(pow(2, temp / 2) - 1)*2 + 1;
            
        } else {
            
            height = (int)(pow(2, temp / 2 + 1) - 1) * 2;  
            
        } // if-else

        cout << height << endl;
        
    } // for
    
    return 0;

} // main()