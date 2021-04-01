#include <iostream>
using namespace std;

int N, M, cnt = 0;
int arr[1001][1001] = { 0, };
bool vi[1001] = { false, };

void dfs(int s) {

	int i = 0;
	vi[s] = true;
	for (i = 1; i <= N; i++) if (arr[s][i] && !vi[i]) dfs(i);
	if (i == N) return;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int i, j, src, dest;

	cin >> N >> M;

	for (i = 1; i <= M; i++) {
		cin >> src >> dest;
		arr[src][dest] = 1;
		arr[dest][src] = 1;
	}

	for (i = 1; i <= N; i++) {
		if (!vi[i]) {
			dfs(i);
			cnt++;
		}
	}

	cout << cnt << "\n";

	return 0;
}