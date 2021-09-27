#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	string c;
	cin >> c;
	vector<string> v;
	for (int i = 0; i < c.length(); i++) {
		v.push_back(c.substr(i, c.length()));
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < c.length(); i++)
	{
		cout << v[i] << endl;
	}

	return 0;
}