#include <iostream>
#include <list>
#include <queue>

using namespace std;

class Graph {

	public:
		
		Graph(int);

		void addEdge(int, int);

		bool isReachable(int, int);

	private:
		
		int size;
		vector<list<int>> adj;

}; // Graph

Graph::Graph(int size) {

	this->size = size;
	adj.resize(size);

} // Graph()

void Graph::addEdge(int from, int to) {

	adj[from].push_back(to);

} // addEdge()

bool Graph::isReachable(int start, int end) {

	if (start == end) { return true; }

	vector<bool> visited(size);

	queue<int> queue;

	visited[start] = true;

	queue.push(start);

	while(!queue.empty()) {

		start = queue.front();
		queue.pop();

		for (auto it = adj[start].begin(); it != adj[start].end(); it++) {

			if (*it == end) { return true; }

			if (!visited[*it]) {

				visited[*it] = true;
				queue.push(*it);
			
			} // if

		} // for

	} // while

	return false;

} // isReachable()

int main() {

	Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    int start = 1, end = 3;

    if (g.isReachable(start, end)) {

    	cout << "Path from " << start << " to " << end << endl;

    } else {

    	cout << "No path from " << start << " to " << end << endl;

    } // if / else

    start = 3, end = 1;

    if (g.isReachable(start, end)) {

    	cout << "Path from " << start << " to " << end << endl;

    } else {

    	cout << "No path from " << start << " to " << end << endl;

    } // if / else    

	return 0;

} // main()