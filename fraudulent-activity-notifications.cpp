// Fraudulent Activity Notifications
// Day #16
// Monday, May 15, 2017
// https://www.hackerrank.com/challenges/fraudulent-activity-notifications

#include <cmath>
#include <vector>
#include <deque>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int notifications = 0;
    
    int num_days;
    cin >> num_days;
    
    int num_used;
    cin >> num_used;
    
    vector<int> arr(num_days);
    
    for (int i = 0; i < num_days; i++) {
        
        cin >> arr[i];
        
    } // for
    
    deque<int> arr_sub(arr.begin(), arr.begin() + num_used);
    
    sort(arr_sub.begin(), arr_sub.end());
    
    bool isOdd = (num_used % 2 != 0);
    
    for (int i = num_used; i < num_days; i++) {
    
        double median;
        
        if (isOdd) {
            
            median = arr_sub[num_used / 2];
            
        } else {
            
            median = (double) (arr_sub[(num_used / 2) - 1] + arr_sub[num_used / 2]) / (double) 2;
            
        }
        
        if (arr[i] >= 2 * median) {
            
            notifications++;
            
        }
        
       auto old = lower_bound(arr_sub.begin(), arr_sub.end(), arr[i - num_used]);
       arr_sub.erase(old);
       
       auto current = upper_bound(arr_sub.begin(), arr_sub.end(), arr[i]);
       arr_sub.insert(current, arr[i]);
        
    } // for
    
    cout << notifications;

    return 0;

} // main()