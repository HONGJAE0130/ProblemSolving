#include<iostream>
#include<vector>
#include<string>

using namespace std;
int dp(int n)
{
	if (n == 1)
		return 1;
	if (n == 2)
		return 2;
	if (n == 3)
		return 4;

	return dp(n - 1) + dp(n - 2) + dp(n - 3);
}

int main()
{
	int i = 0;
	cin >> i;
	int k = 0;
	for (int a = 0; a < i; a++)
	{
		cin >> k;
		cout << dp(k) << "\n";
	}
}