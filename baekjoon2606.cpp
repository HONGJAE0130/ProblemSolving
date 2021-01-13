#include <iostream>
using namespace std;
int net[101][101] = { 0 };
int visit[101] = { 0 };
int i, j, x, y, a, b;
int ans = 0;
void dfs(int n) {
	ans++;
	visit[n] = 1;
	for (int i = 1; i <= a; i++) {
		if (net[n][i] && !visit[i])
			dfs(i);
	}
}
int main()
{
	cin >> a >> b;
	for (j = 0; j < b; j++)
	{
		cin >> x >> y;
		net[x][y] = net[y][x] = 1;
	}
	dfs(1);
	cout << ans - 1;

	return 0;
}