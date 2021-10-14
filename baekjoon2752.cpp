#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> k;
	for (int i = 0; i < 3; i++)
	{
		int n;
		cin >> n;
		k.push_back(n);
	}
	sort(k.begin(), k.end());
	for (int i = 0; i < 3; i++)
	{
		cout << k[i] << " ";
	}


}