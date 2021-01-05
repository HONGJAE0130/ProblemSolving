#include <iostream>
using namespace std;
int prime(int a)
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= a; i++)
		if (a%i == 0) count++;

	return count;
}

int main() {
	int a, b;
	int i, j;
	int count = 0;
	cin >> a;
	for (i = 0; i < a; i++) {
		cin >> b;
		if (prime(b) == 2) count++;
		else continue;
	}
	cout << count << endl;

	return 0;
}