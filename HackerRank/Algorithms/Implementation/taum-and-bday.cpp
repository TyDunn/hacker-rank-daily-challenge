// Taum and B'day
// Day #57
// Monday, June 26, 2017
// https://www.hackerrank.com/challenges/taum-and-bday

#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    
    long cost = 0;
    
    int num;
    cin >> num;
    
    for (int i = 0; i < num; i++) {
        
        long black_num, white_num;
        cin >> black_num >> white_num;

        long black_cost, white_cost;
        cin >> black_cost >> white_cost;

        long conversion;
        cin >> conversion;
        
        if (conversion + white_cost >= black_cost &&
            conversion + black_cost >= white_cost) {
            
            cost = black_num * black_cost + 
                   white_num * white_cost;
            
        } else if (conversion + white_cost < black_cost) {
            
            cost = black_num * (white_cost + conversion) +
                   white_num * white_cost;
            
        } else {
            
            cost = black_num * black_cost +
                   white_num * (black_cost + conversion);
         
        } // if / else if / else

        cout << cost << endl;
        
    } // for
    
    return 0;

} // main()