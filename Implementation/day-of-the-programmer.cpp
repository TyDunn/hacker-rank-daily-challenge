// Day of the Programmer
// Day #25
// Wednesday, May 24, 2017
// https://www.hackerrank.com/challenges/day-of-the-programmer

#include <iostream>

using namespace std;

void determine_date(int);

int main() {
    
    int year;
    cin >> year;
    
    determine_date(year);
    
    return 0;

} // main()

void determine_date(int year) {
    
    int feb_days;
    
    if (year < 1919) {
        
        if (year % 4 == 0) { 
            
            feb_days = 29; 
        
        } else {
            
            feb_days = 28; 
        
        } // if leap year
        
        if (year == 1918) { feb_days -= 13; }
        
    } else {
        
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
            
            feb_days = 29;
            
        } else {
            
            feb_days = 28;
            
        } // if leap year
        
    } // else year 1919 or beyond
    
    int sum = 31 + feb_days + 31 + 30 + 31 + 30 + 31 + 31;
    
    int day = 256 - sum;
    
    cout << day << ".09." << year;
    
} // determine_date()