#include <iostream>
using namespace std;

static const int N = 100;
static const int WHITE = 0;
static const int GREY  = 1;
static const int BLACK = 2;

int n, M[N][N];
int color[N], d[N], f[N], tt;

//재귀를 이용한 DFS
void dfs_visited(int u) {
	int v;
	color[u] = GREY;
	d[u] = ++tt; //첫 방문
	for (int v = 0; v < n; v++) {
		if (M[u][v] == 0) continue;
		if (color[v] == WHITE) {
			dfs_visited(v);
		}
	}
	color[u] = BLACK;
	f[u] == ++tt; // 방문 완료	
}
void dfs() {
	int u;
	// 초기화
	for (u = 0; u < n; u++) {
		color[u] = WHITE;
	}
	tt = 0;

	for (u = 0; u < n; u++) {
		//아직 방문하지 않은 u를 시작점으로 DFS
		if (color[u] == WHITE) dfs_visited(u);
	}
	for (u = 0; u < n; u++) {
		cout << u + 1 << " " << d[u] << " " << f[u] << "\n";
	}
}

int main() {
	int u, v, k, i, j;

	cin >> n;
	for ( i = 0; i < n; i++) {
		for ( j = 0; j < n; j++) {
			M[i][j] == 0;
		}
	}
	for (i = 0; i < n; i++) {
		cin >> u >> k;
		u--;
		for (j = 0; j < k; j++) {
			cin >> v;
			v--;
			M[u][v] = 1;
		}
	}
	dfs();

}