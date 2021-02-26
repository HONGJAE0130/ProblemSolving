#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	int k;
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		v.push_back(k);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++)
	{
		cout << v[i] << "\n";
	}

}