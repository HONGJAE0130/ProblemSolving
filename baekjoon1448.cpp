#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int i, j;
	int num;
	vector <int> v;
	cin >> num;
	for (i = 0; i < num; i++)
	{
		cin >> j;
		v.push_back(j);
	}
	sort(v.begin(), v.end(), greater<int>());
	for (int k = 0; k < num - 2; k++) {
		int a = v[k];
		int b = v[k + 1];
		int c = v[k + 2];
		if (a < b + c) {
			cout << a + b + c << endl;
			return 0;
		}
	}
	cout << -1 << endl;


}