#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(void) {
	int n, i;
	vector<int> p;
	cin >> n;
	int k;
	for (int i = 0; i < n; i++) {
		cin >> k;
		p.push_back(k);
	}

	sort(p.begin(), p.end());
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += p[i] * (n - i);
	}

	cout << sum << endl;
	return 0;
}