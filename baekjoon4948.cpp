#include <iostream>
#include <cmath>
using namespace std;

bool judge_prime(int num) {
	if (num == 1) return 0;
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) return 0;
	}
	return 1;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);


	int n;
	while (1) {
		cin >> n;
		int cnt = 0;

		if (n == 0) break;

		for (int i = n + 1; i <= 2 * n; i++) {
			if (judge_prime(i)) cnt += 1;
		}
		cout << cnt << "\n";
	}
}