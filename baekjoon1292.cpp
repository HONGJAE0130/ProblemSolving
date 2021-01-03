#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int A, B;
	int num;
	int sum = 0;
	int i,j;
	vector <int> v;
	cin >> A >> B;
	for (i = 1; i <= B; i++) {
		for (j = 0; j <= i; j++)
			v.push_back(i);
	}
	for (i = A - 1; i < B; i++)
		sum = sum + v[i];
	cout << sum << endl;

	return 0;
}