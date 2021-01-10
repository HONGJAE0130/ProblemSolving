#include <iostream>
#include <algorithm>
using namespace std;
int a, b;

int main() {
	
	cin >> a;
	int dp[1000000];

	dp[0] = dp[1] = 0;

	for (int b = 2; b <= a; b++)
	{
		dp[b] = dp[b - 1] + 1;
		if (b % 2 == 0)
		{
			dp[b] = min(dp[b], dp[b / 2] + 1);
		}
		if (b % 3 == 0)
		{
			dp[b] = min(dp[b], dp[b / 3] + 1);
		}
	}
	cout << dp[a] << endl;
	return 0;
}