#include <iostream>

using namespace std;

void Bin(unsigned long long a) {
	if (a != 1) Bin(a / 2);
	cout << (a % 2);
}

int main()
{
	long long input;
	cin >> input;

	Bin(input);
	cout << endl;
	return 0;
}