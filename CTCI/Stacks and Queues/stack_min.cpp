#include <iostream>
#include <stack>
#include <climits>

using namespace std;

class StackWithMin {

	public:

		void push(int val) {

			if (val <= min()) {

				min_value.push(val);

			} // if

			stack.push(val);

		} // push()

		void pop() {

			if (stack.top() == min()) {

				min_value.pop();

			} // if

			stack.pop();

		} // pop()

		int min() {

			if (min_value.empty()) {

				return INT_MAX;

			} else {

				return min_value.top();

			} // if / else

		} // min()

		int top() {

			if (stack.empty()) {

				return INT_MAX;

			} else {

				return stack.top();

			} // if / else

		} // top()

		bool empty() {

			if (stack.empty()) { return true; }
			else { return false; }

		} // empty()

	private:

		stack<int> min_value;
		stack<int> stack;

}; // StackWithMin

void print_top_and_min(StackWithMin&);

int main() {

	StackWithMin stack;

	cout << "PUSHING" << endl << endl;

	stack.push(100);
	print_top_and_min(stack);
	stack.push(105);
	print_top_and_min(stack);
	stack.push(90);
	print_top_and_min(stack);
	stack.push(1);
	print_top_and_min(stack);
	stack.push(59);
	print_top_and_min(stack);
	stack.push(70);
	print_top_and_min(stack);

	cout << "POPPING" << endl << endl;

	while (!stack.empty()) {

		print_top_and_min(stack);
		stack.pop();

	} // while

	return 0;

} // main()

void print_top_and_min(StackWithMin & stack) {

	cout << "Top: " << stack.top() << endl;
	cout << "Min: " << stack.min() << endl << endl;

} // print_top_and_min()