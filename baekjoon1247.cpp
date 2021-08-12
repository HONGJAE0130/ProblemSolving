#include <iostream>
using namespace std;

int main() {
	for (int i = 0; i < 3; ++i) {
		int n;
		cin >> n;
		__int128 s = 0;
		long long val = 0;
		for (int j = 0; j < n; ++j) {
			cin >> val;
			s += val;
		}

		if (s > 0) cout << "+" << endl;
		else if (s < 0) cout << "-" << endl;
		else cout << 0 << endl;
	}

	return 0;
}