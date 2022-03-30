#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	getline(cin, s);
	int answer = 1;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ') answer++;
	}
	if (s[0] == ' ') answer--;
	if (s[s.length() - 1] == ' ') answer--;
	cout << answer;
}