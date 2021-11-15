#include <iostream>
#include <vector>
using namespace std;

int main() {
	int v[5][5];
	int Sum = 0;
	int winner = 0;
	for (int i = 0; i < 5; i++)
	{
		Sum = 0;
		for (int j = 0; j < 4; j++)
		{
			cin >> v[i][j];
			Sum += v[i][j];
		}
		v[i][4] = Sum;
		if (v[i][4] > v[winner][4])  winner = i;
	}
	cout << winner + 1 << ' ' << v[winner][4] << endl;
}