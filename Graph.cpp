//그래프를 이해하기 위한 첫 PS 
#include <iostream>
using namespace std;

static const int N = 100;

int main() {
	int M[N][N];
	int n, u,k,v;

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			M[i][j] = 0;
		}
	}
	// u k v v v v v v 
	// 노드번호 || 노드번호에 연결된 노드의 갯수 || 노드 
	for (int i = 0; i < n; i++) {		
		cin >> u >> k;
		u--;
		for (int j = 0; j < k; j++) {
			cin >> v;
			v--;
			M[u][v] = 1;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j) cout << " ";
			cout << M[i][j];
		}
		cout << endl;
	}

}