#include <iostream>
#include <vector>
using namespace std;

int main() {
	int i = 0;
	int count = 0;
	vector <int> v(11);
	vector <int> p(42);
	for (i = 0; i < 10; i++)
	{
		cin >> v[i];

		p[v[i] % 42] = 1;
	}
	for (i = 0; i < 42; i++) {
		if (p[i] == 1) count++;
	}
	cout << count;

	return 0;
}