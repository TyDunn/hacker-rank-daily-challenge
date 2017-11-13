#include <iostream>
#include <string>

using namespace std;

string urlify(string);

int main() {

	string input;
	getline(cin, input);

	cout << urlify(input) << endl;

	return 0;

} // main()

string urlify(string input) {

	for (int i = 0; i < input.size(); i++) {

		if (input[i] == ' ') {

			input.replace(i, 1, "%20");

		} // if

	} // for

	return input;

} // urlify()