// Truck Tour
// Day #131
// Friday, October 6, 2017
// https://www.hackerrank.com/challenges/truck-tour

#include <vector>
#include <iostream>

using namespace std;

struct Pump {
    
    int fuel;
    int dist_to_next;  
    Pump(int f, int d) : fuel(f), dist_to_next(d) {}
    
};

bool attempt_truck(vector<Pump>&, int);

int main() {
    
    int num;
    cin >> num;
    
    vector<Pump> pumps;
    
    for (int i = 0; i < num; i++) { 
    
        int f, d;
        cin >> f >> d;
        pumps.push_back(Pump(f,d));
    
    } // for
    
    int i = 0;
    
    for (; i < num; i++) { 
    
        if (attempt_truck(pumps, i)) { break; }
    
    } // for
    
    cout << i << endl;
        
    return 0;

} // main()

bool attempt_truck(vector<Pump> & pumps, int start_pump) {
    
    int fuel_amount = 0;
    int current_pump = start_pump;
    
    while (true) {
        
        fuel_amount += pumps[current_pump].fuel;
        
        if (fuel_amount < pumps[current_pump].dist_to_next) {
            
            return false;
            
        } else {
            
            int next_pump = (current_pump + 1) % pumps.size();
            
            if (next_pump == start_pump) {
                
                return true;
                
            } else {
                
                fuel_amount -= pumps[current_pump].dist_to_next;
                current_pump = next_pump;
                
            } // if / else
            
        } // if / else
        
    } // while
    
} // attempt_truck()