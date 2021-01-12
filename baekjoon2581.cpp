#include <iostream>
using namespace std;
int prime(int n)
{
	int count = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n%i == 0) count++;
	}
	if (count == 2) return 1;
	else return 0;
}
int main() {
	int a, b;
	cin >> a >> b;
	int total = 0;
	int min = 10001;
	for (int i = a; i <= b; i++)
	{
		if (prime(i) == 1)
		{
			total = total + i;
			if (i < min) min = i;
		}
	}
	if (min == 10001) cout << -1;
	else {
		cout << total << endl;
		cout << min << endl;
	}	
}