#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool compare(pair<int, string> a, pair<int, string> b)
{
	return a.first < b.first;
}
int main()
{
	int N;
	pair<int, string> p;
	vector<pair<int, string>> v;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> p.first >> p.second;
		v.push_back(p);
	}
	stable_sort(v.begin(), v.end(), compare);
	for (int i = 0; i < N; i++)
	{
		cout << v[i].first << " " << v[i].second << '\n';
	}
}