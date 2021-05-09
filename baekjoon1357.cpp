#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int Rev(string str)
{
	reverse(str.begin(), str.end());
	int result = stoi(str);
	return result;
}


int main()
{
	string a, b;
	cin >> a >> b;
	int res = Rev(a) + Rev(b);
	cout << Rev(to_string(res)) << endl;

	return 0;
}