#include <iostream>
#include <vector> 
#include <queue>
#include <algorithm>
using namespace std;

vector <vector<int> > vec;
vector<bool> visited;

void DFS(int v);
void BFS(int v);

int main() {
	int n, m, v;
	cin >> n >> m >> v;	

	vec.resize(n + 1, vector<int>(0, 0));
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		vec[a].push_back(b);
		vec[b].push_back(a);
	}

	
	for (int i = 1; i < vec.size(); i++) {
		sort(vec[i].begin(), vec[i].end());
	}

	visited.resize(n + 1, false);
	DFS(v);
	cout << "\n";
	visited.assign(n + 1, false);  
	BFS(v);

	return 0;
}


void DFS(int v) {
	visited[v] = true;
	cout << v << " ";
	for (int i = 0; i < vec[v].size(); i++) {
		if (!visited[vec[v][i]])
			DFS(vec[v][i]);
	}
}

void BFS(int v) {
	visited[v] = true;
	cout << v << " ";

	queue<int> que;
	que.push(v);
	while (!que.empty()) {
		int v = que.front();
		que.pop();

		for (int i = 0; i < vec[v].size(); i++) {
			if (!visited[vec[v][i]]) {
				visited[vec[v][i]] = true;
				cout << vec[v][i] << " ";
				que.push(vec[v][i]);
			}
		}
	}

}