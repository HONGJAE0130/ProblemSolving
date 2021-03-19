#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(pair <int, int> p1, pair <int, int> p2) {
	if (p1.first == p2.first) return p1.second < p2.second;
	return p1.first < p2.first;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;

	vector<pair<int, int>> v;

	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		v.push_back(make_pair(a, b));
	}
	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < n; i++)
	{
		cout << v[i].first << " " << v[i].second << "\n";
	}
	return 0;
}