// Birthday Chocolate
// Day #22
// Sunday, May 21, 2017
// https://www.hackerrank.com/challenges/the-birthday-bar

#include <vector>
#include <iostream>

using namespace std;

int main() {
    
    int num;
    cin >> num;
    
    vector<int> arr(num);
    
    for (int i = 0; i < num; i++) {
        
        cin >> arr[i];
        
    } // for
    
    int day;
    cin >> day;
    
    int month;
    cin >> month;
    
    int count = 0;
    
    for (int i = month - 1; i < num; i++) {
        
        int sum = 0;
        
        for (int j = 0; j < month; j++) {
        
            sum += arr[i-j];
            
        } // for
        
        if (day == sum) {
                
            ++count;
                
        } // if
        
    } // for
    
    cout << count;
    
    return 0;

} // main()