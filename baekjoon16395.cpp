#include <iostream>
using namespace std;
int c[31][31];
int main() {
	int n, k;
	cin >> n >> k;
	c[1][1] = 1;
	c[2][1] = 1;
	c[2][2] = 1;
	for (int i = 2; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			c[i][j] = c[i - 1][j] + c[i - 1][j - 1];
		}
	}
	cout << c[n][k] << '\n';
}