#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int count_ways(int);
int count_ways(int, vector<int>&);

int main() {

	int num_steps;

	cout << "How many steps? ";

	cin >> num_steps;

	cout << count_ways(num_steps) << endl;

	return 0;

} // main()

int count_ways(int num_steps) {

	vector<int> steps(num_steps + 1);

	fill(steps.begin(), steps.end(), -1);

	return count_ways(num_steps, steps);

} // count_ways(int)

int count_ways(int num_steps, vector<int> & steps) {

	if (num_steps < 0) {

		return 0;

	} else if (num_steps == 0) {

		return 1;

	} else if (steps[num_steps] > -1) {

		return steps[num_steps];

	} else {

		steps[num_steps] = count_ways(num_steps - 1, steps) +
						   count_ways(num_steps - 2, steps) +
						   count_ways(num_steps - 3, steps);

		return steps[num_steps];

	} // if ... else

} // count_ways(int, vector<int>)