#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	priority_queue<int, vector<int>, greater<int>>q;
	int N; cin >> N;
	while (N--) {
		int x; cin >> x;
		q.push(x);
	}
	int ans = 0;
	while (q.size() != 1) {
		int a = q.top();
		q.pop();
		int b = q.top();
		q.pop();
		ans += (a + b);
		q.push(a + b);
	}
	cout << ans << '\n';
}