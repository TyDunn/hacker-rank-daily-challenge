#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

bool check_palindrome(string);

int main() {

	cout << "input word: ";
	
	string input;
	getline(cin, input);

	cout << endl;

	if (check_palindrome(input)) {

		cout << "PALINDROME" << endl;

	} else {

		cout << "NOT PALINDROME" << endl;

	} // if / else
	
	return 0;

} // main()

bool check_palindrome(string input) {

	unordered_map<char, int> chars;

	for (auto itr : input) {

		if (itr != ' ') { ++chars[itr]; }

	} // for

	bool one_odd = false;

	for (auto itr : chars) {

		if (itr.second % 2 != 0) {

			if (one_odd == true) {

				return false;

			} else {

				one_odd = true;

			} // if / else

		} // if

	} // for

	return true;

} // check_palindrome()