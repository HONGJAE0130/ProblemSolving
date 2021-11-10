#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	vector<int> vtr(7);
	bool isOdd = false;
	int sum = 0;
	int cnt = 0;

	for (int i = 0; i < 7; i++) {
		cin >> vtr[i];
		if (vtr[i] % 2) {
			sum += vtr[i];
			if (!isOdd)	isOdd = true;
		}
		else {
			vtr[i] = 0;
		}
	}

	if (!isOdd) cout << "-1";
	else {
		sort(vtr.begin(), vtr.end());

		while (!vtr[cnt]) {
			cnt++;
		}
		cout << sum << "\n" << vtr[cnt];
	}
}