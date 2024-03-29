#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
	if (n <= 1) {
		return false;
	}

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
	cin.tie(NULL);


	int a, b;
	cin >> a >> b;
	for (int i = a; i <= b; i++)
	{
		if (isPrime(i)) {
			cout << i << "\n";
		}
	}
	return 0;
}