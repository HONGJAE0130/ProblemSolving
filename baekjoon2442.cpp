#include <iostream>
using namespace std;

int main(void)
{
	int a;
	cin >> a;

	for (int y = 1; y <= a; y++)
	{
		for (int x = 0; x < a + (y - 1); x++)
		{
			if (x < a - y)
				cout << " ";
			else
				cout << "*";
		}
		cout << "\n";
	}
}