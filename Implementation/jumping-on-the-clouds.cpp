// Jumping on the Clouds
// Day #53
// Thursday, June 22, 2017
// https://www.hackerrank.com/challenges/jumping-on-the-clouds


#include <vector>
#include <iostream>

using namespace std;


int main() {
    
    int jumps = 0;
    
    int num;
    cin >> num;
    
    vector<int> clouds(num);
    
    for (int i = 0; i < num; i++) {
        
        cin >> clouds[i];
        
    } // for
    
    int position = 0;
    
    while (position < num - 1) {
        
        if (clouds[position + 2] == 0) {
            
            position += 2;
            ++jumps;
            
        } else {
            
            ++position;
            ++jumps;
            
        } // if / else
        
    } // while
    
    cout << jumps << endl;
    
    return 0;

} // main()