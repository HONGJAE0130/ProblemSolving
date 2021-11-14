#include <iostream>
#include <cstring>
#include <algorithm>

#include <cmath>

using namespace std;
int in[4];
int out[4];
int sum[4];
int main() {
	cin.tie(NULL);


	ios::sync_with_stdio(false);
	for (int i = 0; i < 4; i++) {
		cin >> out[i] >> in[i];
	}

	for (int i = 0; i < 4; i++) {
		if (i == 0) {
			sum[i] = in[i] - out[i];
		}
		else {
			sum[i] = sum[i - 1] + in[i] - out[i];
		}
	}
	sort(sum, sum + 4);
	cout << sum[3];
	return 0;
}
