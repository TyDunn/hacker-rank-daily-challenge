#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

bool check_permutation(string, string);

int main() {

	string one, two;

	cout << "String one: ";
	cin >> one;

	cout << "String two: ";
	cin >> two;

	if (check_permutation(one, two)) {

		cout << "True. The two strings are permutations" << endl;

	}  else {

		cout << "False. The two strings are not permutations" << endl;

	} // if / else

	return 0;

} // main()

bool check_permutation(string one, string two) {

	if (one.length() != two.length()) { return false; }

	unordered_map<char, int> first;

	for (auto itr : one) {

		++first[itr];

	} // for

	for (auto itr : two) {

		--first[itr];

		if (first[itr] < 0) { return false; }

	} // for

	return true;

} // check_permutation()