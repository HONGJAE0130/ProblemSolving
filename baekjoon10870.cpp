#include <iostream>
using namespace std;

int fib(int n) {
	if (n == 0)
		return 0;
	else if (n <= 2)
		return 1;

	else if (n > 2)
		return fib(n - 1) + fib(n - 2);
}

int main() {
	int i;
	cin >> i;
	cout << fib(i);
}