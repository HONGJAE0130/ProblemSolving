#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	int N, B[51];
	vector<pair<int, int>>v;

	cin >> N;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		v.push_back(make_pair(a, i));
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < N; i++)
	{
		B[v[i].second] = i;
	}
	for (int i = 0; i < N; i++)
		cout << B[i] << " ";

	return 0;
}