#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class StackOfPlates {

	public:

		StackOfPlates(int c) : max_cap(c) {};

		void push(int item) {

			if (cur_cap % max_cap == 0) {

				stack<int> new_stack;
				stacks.push_back(new_stack);

			} // if

			stacks[cur_idx].push(item);

			++cur_cap;

		} // push()

		int pop() {

			int popped = stacks[cur_idx].top();

			stacks[cur_idx].pop();

			--cur_cap;

			return popped;

		} // pop()

	private:

		int max_cap;
		int cur_cap = 0;
		int cur_idx = cur_cap / max_cap;
		vector<stack<int>> stacks;

}; // StackOfPlates

int main() {
	
	StackOfPlates SoP(2);

	SoP.push(1);
	SoP.push(2);
	cout << SoP.pop() << " ";
	cout << SoP.pop() << endl;
	SoP.push(3);
	SoP.push(4);
	SoP.push(5);
	SoP.push(6);
	cout << SoP.pop() << " ";
	cout << SoP.pop() << " ";
	cout << SoP.pop() << " ";
	cout << SoP.pop() << endl;

	return 0;

} // main()