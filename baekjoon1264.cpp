#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i = 0;
	string s;

	while (1) {
		getline(cin, s);
		int count = 0;
		if (s[0] == '#') break;
		int k = s.length() - 1;
		for (int i = 0; i < k; i++)
		{
			if (s[i] == 'a' || s[i] == 'i' || s[i] == 'o' || s[i] == 'e' || s[i] == 'u' || s[i] == 'A' || s[i] == 'I' || s[i] == 'O' || s[i] == 'E' || s[i] == 'U')
			{
				count++;
			}
		}



		cout << count << endl;

	}
}