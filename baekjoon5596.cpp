#include <iostream>
#include <algorithm>
using namespace std;
int s[4], t[4], ssum, tsum;
int main() {
	for (int i = 0; i < 4; i++)
	{
		cin >> s[i];
		ssum += s[i];
	}
	for (int i = 0; i < 4; i++)
	{
		cin >> t[i];
		tsum += t[i];
	}
	if (ssum == tsum)
		cout << ssum << '\n';
	else
		cout << (ssum > tsum ? ssum : tsum);

}