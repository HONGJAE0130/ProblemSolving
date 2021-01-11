#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int dp[301];
	int stair[301];
	int a, i;

	cin >> a;
	for (i = 0; i < a; i++)
	{
		cin >> stair[i];
	}
	dp[0] = stair[0];
	dp[1] = max(stair[0] + stair[1], stair[1]);
	dp[2] = max(stair[0] + stair[2], stair[1] + stair[2]);
	for (i = 3; i < a; i++)
	{
		dp[i] = max(dp[i - 2] + stair[i], stair[i - 1] + stair[i] + dp[i - 3]);
	}
	cout << dp[a - 1];
	return 0;
}