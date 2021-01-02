#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool  compare(string a, string b) {
	if (a.length() == b.length())
		return a < b;
	return a.length() < b.length();
}
int main() {
	int times;
	int i;
	string str;
	string temp;
	vector <string> s;
	cin >> times;
	for (i = 0; i < times; i++) {
		cin >> str;
		s.push_back(str);

	}
	sort(s.begin(), s.end(), compare);
	s.erase(unique(s.begin(), s.end()), s.end());
	for (i = 0; i < s.size(); i++) {
		cout << s[i] << endl;
	}
	return 0;
}