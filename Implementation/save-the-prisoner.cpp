// Save the Prisoner!
// Day #41
// Friday, June 9, 2017
// https://www.hackerrank.com/challenges/save-the-prisoner

#include <iostream>

using namespace std;

int saveThePrisoner(int, int, int);

int main() {
    
    int num_tests;
    cin >> num_tests;
    
    for (int i = 0; i < num_tests; i++){
        
        int num_prisoners, num_sweets, prisoner_id;
        
        cin >> num_prisoners >> num_sweets >> prisoner_id;
       
        int result = saveThePrisoner(num_prisoners, num_sweets, prisoner_id);
        
        cout << result << endl;
    
    } // for
    
    return 0;

} // main()

int saveThePrisoner(int num_prisoners, int num_sweets, int prisoner_id) {
    
    if ((prisoner_id + num_sweets - 1) % num_prisoners == 0) {
        
        return num_prisoners;
        
    } else {
        
        return (prisoner_id + num_sweets - 1) % num_prisoners;
        
    } // if / else
    
} // saveThePrisoner()