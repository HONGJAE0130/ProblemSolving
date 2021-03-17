#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	while (b != 0)
	{
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int lcm(int a, int b, int greatCommonDivisor)
{
	return (a * b) / greatCommonDivisor;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b;
	cin >> a >> b;
	int greatCommonDivisor = gcd(a, b);
	int leastCommonMultiple = lcm(a, b, greatCommonDivisor);

	cout << greatCommonDivisor << '\n' << leastCommonMultiple;
}