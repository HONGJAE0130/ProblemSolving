#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
	int times;
	int i;
	vector < pair<int, string>>s;
	string str;

	cin >> times;
	for (i = 0; i < times; i++) {
		cin >> str;
		s.push_back(make_pair(str.length(), str));
	}
	sort(s.begin(), s.end());
	s.erase(unique(s.begin(), s.end()), s.end());
	for (i = 0; i < s.size(); i++) {
		cout << s[i].second << endl;
	}
	return 0;
}