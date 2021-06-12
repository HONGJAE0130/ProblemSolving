#include <iostream>
#include <string>
using namespace std;

int main() {
	string board[8];
	int sum = 0;

	for (int i = 0; i < 8; i++) {
		string state;
		cin >> state;
		board[i] = state;
		if (i % 2 == 0) {
			for (int j = 0; j < 8; j += 2) {
				if (state[j] == 'F') sum++;
			}
		}
		else {
			for (int j = 1; j < 8; j += 2) {
				if (state[j] == 'F') sum++;
			}
		}
	}
	cout << sum;
	return 0;
}