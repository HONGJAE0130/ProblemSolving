#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	int n;		
	cin >> n;
	getline(cin, s);
	for (int i = 0; i < n; i++) {
		getline(cin, s);

		string str = "";
		for (int j = 0; j < s.length(); j++) {
			if (j == 0 && 97 <= s[0] && s[0] <= 122) {
				str.push_back(s[0] - 32);
			}
			else
				str.push_back(s[j]);
		}	
		cout << str << endl;
	}
	system("pause");
	return 0;
}