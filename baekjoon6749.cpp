#include <iostream>
using namespace std;

int main()
{
	int youngest, middle, oldest;
	cin >> youngest >> middle;
	oldest = 2 * middle - youngest;

	cout << oldest;
	return 0;
}