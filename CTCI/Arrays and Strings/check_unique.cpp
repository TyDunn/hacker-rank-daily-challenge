#include <string>
#include <iostream>
#include <vector>

using namespace std;

bool check_unique(string);

int main() {

	string input;
	cin >> input;

	check_unique(input) ? cout << "YES" << endl : cout << "NO" << endl;

	return 0;

} // main()

bool check_unique(string input) {

	if (input.size() > 128) { return false; }

	vector<int> ascii(128);

	for (auto itr : input) {

		if (!ascii[itr]) {

			ascii[itr] = true;

		} else {

			return false;

		} // if / else

	} // for

	return true;

} // check_unique()