#include <iostream>
#include <bitset>

using namespace std;

int main() {

	bitset<11> n(0b10000000000);
	bitset<5> m(0b10011);

	int i = 2, j = 6;

	cout << "Input N: " << n << endl;
	cout << "Input M: " << m << endl;
	cout << "Input i: " << i << endl;
	cout << "Input j: " << j << endl << endl;

	for (size_t k = 0; k < m.size(); k++) {

		n.set(k+i, m[k]);

	} // for

	cout << "Output: " << n << endl;

	return 0;

} // main()