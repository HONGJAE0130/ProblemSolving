#include <iostream>
#include <string> 
#include <stack>
#include <vector>
using namespace std;
bool check(string s)
{
	int temp = 0;
	if (s.size() % 2 == 1) return false;
	else {
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '(')
				temp++;
			else
				temp--;
			if (temp < 0)
				return false;
		}
	}
	if (temp == 0) return true;
	else
		return false;
}
int main() {
	int n;
	cin >> n;
	string s;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		check(s);
		if (check(s) == true) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}