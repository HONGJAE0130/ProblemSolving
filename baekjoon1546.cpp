#include <iostream>
using namespace std;
int main() {
	float average = 0, best = 0;
	int num;
	cin >> num;
	int *arr = new int[num];
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
		if (best < arr[i])
		{
			best = arr[i];
		}
	}
	for (int i = 0; i < num; i++)//ÃÑÁ¡±¸ÇÏ±â
	{
		average += ((arr[i] / best) * 100);
	}
	cout << fixed;
	cout.precision(2);
	cout << average / num << '\n';
}

