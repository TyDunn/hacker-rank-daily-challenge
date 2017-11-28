#include <iostream>
#include <stack>
#include <cassert>

using namespace std;

class MyQueue {

	public:

		void push(int val) {

			dload.push(val);

		} // push()

		void pop() {

			shuffle();
			uload.pop();

		} // pop()

		int front() {

			shuffle();
			return uload.top();

		} // top()

		bool empty() {

			if (dload.empty() && uload.empty()) {

				return true;

			} else {

				return false;

			} // if / else

		} // empty()

	private:

		void shuffle() {

			if (uload.empty() && !dload.empty()) {

				while (!dload.empty()) {

					uload.push(dload.top());
					dload.pop();

				} // while

			} // if

		} // shuffle()

		stack<int> dload;
		stack<int> uload;

}; // MyQueue


int main() {

	MyQueue queue;

	std::cout << "--------------" << std::endl;
	std::cout << "STARTING TESTS" << std::endl;
	std::cout << "--------------" << std::endl << std::endl;

	assert(queue.empty() == true);
	std::cout << "[TEST 0] COMPLETE" << std::endl;

	queue.push(1);
	queue.push(2);
	queue.push(3);

	assert(queue.empty() == false);
	std::cout << "[TEST 1] COMPLETE" << std::endl;

	assert(queue.front() == 1);
	std::cout << "[TEST 2] COMPLETE" << std::endl;

	queue.pop();

	assert(queue.front() == 2);
	std::cout << "[TEST 3] COMPLETE" << std::endl;

	queue.pop();
	queue.push(4);

	assert(queue.empty() == false);
	std::cout << "[TEST 4] COMPLETE" << std::endl;

	assert(queue.front() == 3);
	std::cout << "[TEST 5] COMPLETE" << std::endl;

	queue.pop();
	queue.push(5);

	assert(queue.front() == 4);
	std::cout << "[TEST 6] COMPLETE" << std::endl;

	queue.pop();
	queue.pop();
	queue.push(6);

	assert(queue.front() == 6);
	std::cout << "[TEST 7] COMPLETE" << std::endl;

	queue.pop();

	assert(queue.empty() == true);
	std::cout << "[TEST 8] COMPLETE" << std::endl;

	std::cout << "------------------" << std::endl;
	std::cout << "ALL TESTS COMPLETE" << std::endl;
	std::cout << "------------------" << std::endl << std::endl;

	return 0;

} // main()