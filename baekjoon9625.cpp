#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	ios::sync_with_stdio(false);
	cin.sync_with_stdio(false);
	cout.sync_with_stdio(false);
	int A[46] = { 1,0, };
	int B[46] = { 0, };
	int k = 0;
	cin >> k;
	for (int i = 1; i <= k; i++)
	{
		A[i] = B[i - 1];
		B[i] = B[i - 1] + A[i - 1];
	}
	cout << A[k] << " " << B[k];

	return 0;
}