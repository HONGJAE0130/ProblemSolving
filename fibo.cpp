//메모제이션 방법이다. N의 경우가 큰 경우에는 이런 방법을 사용하지만 N이 작은 경우에는
//ALDS1_10_A 
//재귀방식으로 구현을 해도된다.

#include <iostream>

using namespace std;
int n,dp[50];


int main() {
	cin >> n;
	dp[0] = dp[1] = 1;
	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	cout << dp[n];

	return 0;
}