#include <iostream>
#include <string>

using namespace std;

string compress_string(string);

int main() {

	cout << "Input string: ";

	string input;
	cin >> input;

	cout << compress_string(input) << endl;

	return 0;

} // main()

string compress_string(string input) {

	string output;

	char current = input[0];
	int count = 0;
	int idx = 0;

	while (idx < input.size()) {

		while (current == input[idx]) {

			++count;
			++idx;

		} // while

		output += current;
		output += to_string(count);

		current = input[idx];
		count = 0;

	} // while

	if (input.size() > output.size()) { return output; }

	return input;

} // compress_string()