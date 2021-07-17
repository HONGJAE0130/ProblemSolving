#include <iostream>
#include <cmath>
using namespace std;

void hanoi(int n, int from, int to)
{
	int middle = 6 - from - to;

	if (n == 1) {
		cout << from << " " << to << endl;
		return;
	}
	if (n >= 2) {
		hanoi(n - 1, from, middle);
		hanoi(1, from, to);
		hanoi(n - 1, middle, to);
	}
}

int main()
{
	int n;
	cin >> n;
	cout << pow(2, n) - 1 << endl;
	hanoi(n, 1, 3);	
	return 0;
}