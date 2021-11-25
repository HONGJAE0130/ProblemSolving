//전위 중위 후위 표기식은 스택관련 문제에서 대표격인 것으로 알고있다.
//스택을 이용해서 풀어봤다.
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	stack<char> sta;
	cin >> s;
	int ssize = s.size();
	for (int i = 0; i < ssize; i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') cout << s[i];
		else {
			if (s[i] == ')') {
				while (sta.top() != '(') {
					cout << sta.top();
					sta.pop();
				}
				sta.pop();
			}
			else if (s[i] == '*' || s[i] == '/') {
				while (!sta.empty() && (sta.top() == '*' || sta.top() == '/')) {
					cout << sta.top();
					sta.pop();
				}
				sta.push(s[i]);
			}
			else if (s[i] == '+' || s[i] == '-') {
				while (!sta.empty() && sta.top() != '(') {
					cout << sta.top();
					sta.pop();
				}
				sta.push(s[i]);
			}
			else if (s[i] == '(') sta.push(s[i]);
		}

	}
	while (!sta.empty()) {
		cout << sta.top();
		sta.pop();
	}
}
