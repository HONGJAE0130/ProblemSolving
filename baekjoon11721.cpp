#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	cin >> str;

	int i = 0;
	while (1)
	{
		cout << str.substr(i, 10) << endl;
		i += 10;
		if (i > str.length() - 1)
			break;
	}
}