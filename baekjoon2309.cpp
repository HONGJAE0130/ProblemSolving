#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v;
	int N;
	int sum;
	for (int i = 0; i < 9; i++) {
		cin >> N;
		v.push_back(N);
		sum = sum + N;
	}
	for (int i = 0; i < 8; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			if (sum - (v[i] + v[j]) == 100)
			{
				v[i] = -1;
				v[j] = -1;
			}
		}
	}
	sort(v.begin(), v.end());
	for (int i = 2; i < 9; i++)
	{
		cout << v[i] << endl;
	}
	return 0;
}