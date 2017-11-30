#include <iostream>
#include <string>

using namespace std;

bool is_rotation(string, string);

int main() {

	bool rota = false;

	string s1, s2;

	cout << "String 1: ";
	cin >> s1;

	cout << "String 2: ";
	cin >> s2;

	if (is_rotation(s1, s2)) {

		cout << "ROTATION" << endl;

	} else {

		cout << "NOT ROTATION" << endl;

	} // if / else

	return 0;

} // main()

bool is_rotation(string s1, string s2) {

	int len = s1.size();

	if (len == s2.size() && len > 0) {

		string s1s1 = s1 + s1;
		if (s1s1.find(s2) != string::npos) { return true; }

	} // if

	return false;

} // is_rotation()