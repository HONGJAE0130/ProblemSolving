#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int start = 0;
	int end = s.length();
	for (int i = 0; i < end / 2; ++i) {
		if (s[i] != s[end - i - 1]) {
			cout << "0" << endl;
			return 0;
		}
	}
	cout << "1" << endl;
}