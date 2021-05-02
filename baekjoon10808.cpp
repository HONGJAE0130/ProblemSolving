#include <iostream>

#include <string>

using namespace std;



int alphabet[26];



int main(void)

{

	ios_base::sync_with_stdio(0);

	cin.tie(0);

	string s;

	cin >> s;



	for (int i = 0; i < s.length(); i++)

		alphabet[s[i] - 'a']++;



	for (int i = 0; i < 26; i++)

		cout << alphabet[i] << " ";

	cout << "\n";

	return 0;
}
