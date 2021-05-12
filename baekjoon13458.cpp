#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	

	int num, main, sub;
	cin >> num;
	vector<int> person(num);
	for (auto &i : person)
		cin >> i;
	cin >> main >> sub;

	long long result = 0;
	for (int idx = 0; idx < num; idx++) {
		person[idx] -= main;
		result++;
		if (person[idx] <= 0)
			continue;
		if (person[idx] % sub > 0)
			result++;
		result += person[idx] / sub;
	}
	cout << result;
	return 0;
}
