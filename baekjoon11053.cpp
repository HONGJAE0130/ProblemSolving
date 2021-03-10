#include <iostream>
using namespace std;
int dp[1001];
int arr[1001];

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	//init
	for (int i = 0; i < n; i++) {
		dp[i] = 1;
	}

	for (int i = 0; i < n; i++) {
		for (int j = i; j >= 0; j--) {
			if (arr[j] < arr[i] && dp[j] >= dp[i])
				dp[i] = dp[j] + 1;
		}
	}

	int max = 0;
	for (int i = 0; i < n; i++) {
		if (max < dp[i]) max = dp[i];
	}
	//show
	cout << max << endl;
	return 0;
}
