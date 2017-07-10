// Flatland Space Stations
// Day #67
// Monday, July 10, 2017
// https://www.hackerrank.com/challenges/flatland-space-stations

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    
    int num_cities, num_stations;
    cin >> num_cities >> num_stations;
    
    vector<int> stations(num_stations);
    
    for (int i = 0; i < num_stations; i++) {
    
        cin >> stations[i];
        
    } // for
    
    sort(stations.begin(), stations.end());
    
    int max_distance = stations[0];
    
    for (int i = 1; i < num_stations; i++) {
        
        int distance = (stations[i] - stations[i - 1]) / 2;
        
        if (distance > max_distance) {
            
            max_distance = distance;
            
        } // if
        
    } // for
    
    int last_distance = num_cities - 1 - stations[num_stations - 1];
    
    if (last_distance > max_distance) { max_distance = last_distance; }
    
    cout << max_distance << endl;
    
    return 0;
    
} // main()