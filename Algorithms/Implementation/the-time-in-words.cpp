// Beautiful Triplets 
// Day #62
// Wednesday, July 5, 2017
// https://www.hackerrank.com/challenges/the-time-in-words

#include <vector>
#include <iostream>

using namespace std;


int main() {
    
    int hour, min;
    cin >> hour >> min;
    
    vector<string> timeInWords = { "zero", "one", "two", "three", "four", "five",
                                   "six", "seven", "eight", "nine", "ten", "eleven",
                                   "twelve", "thirteen", "fourteen", "fifteen", "sixteen", 
                                   "seventeen", "eighteen", "nineteen", "twenty", "twenty one", 
                                   "twenty two", "twenty three", "twenty four", "twenty five", 
                                   "twenty six", "twenty seven", "twenty eight", "twenty nine"};   
    
    if (min == 0) {
        
        cout << timeInWords[hour] 
             << " o' clock" 
             << endl;
        
    } else if (min == 1) {
        
        cout << "one minute past "
             << timeInWords[hour]
             << endl;
    
    } else if (min == 15) {
        
        cout << "quarter past " 
             << timeInWords[hour]
             << endl;
        
    } else if (min == 30) {
        
        cout << "half past "
             << timeInWords[hour]
             << endl;
        
    } else if (min == 45) {
        
        cout << "quarter to "
             << timeInWords[hour + 1];
        
    } else if (min == 59) {
        
        cout << "one minute to "
             << timeInWords[hour + 1]
             << endl;
        
    } else if (min < 30) {
        
        cout << timeInWords[min]
             << " minutes past "
             << timeInWords[hour];
        
    } else {
        
        cout << timeInWords[60 - min]
             << " minutes to "
             << timeInWords[hour + 1];
        
    } // if / else (min > 30)
    
    return 0;

} // main()