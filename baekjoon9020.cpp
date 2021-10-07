#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
	if (n <= 1) return false;
	for (int i = 2; i <= sqrt(n); i++) {
		if ((n%i) == 0) {
			return false;
		}
	}
	return true;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int T, n;
	cin >> T;
	while (T--)
	{
		cin >> n;
		int i = n / 2;
		for (; i < n; i++)
		{
			if (isPrime(i))
				if (isPrime(n - i))
					break;
		}
		cout << n - i << " " << i << "\n";
	}


}