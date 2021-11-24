#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	getline(cin, s);
	stack<char> stk;


	int sum = 0;
	int temp = 1;

	bool check = true;
	//분배법칙으로 풀어보자.
	for (int i = 0; i < s.length(); i++) {


		if (s[i] == '(') {
			stk.push(s[i]);
			temp *= 2;
		}
		else if (s[i] == ')') {
			//올바르지 못한 입력
			if (stk.empty() || stk.top() != '(') {
				check = false;
				break;
			}
			//올바른 입력
			else {
				//이 조건이 나오는 이유가 중요함.
				// '여는 괄호가 직전에 있지 않으면 값이 되는 것이 아님'
				if (s[i - 1] == '(') {
					sum += temp;
				}
				stk.pop();
				temp /= 2;

			}
		}
		else if (s[i] == '[') {
			stk.push(s[i]);
			temp *= 3;
		}
		else if (s[i] == ']') {
			//올바르지 못한 입력
			if (stk.empty() || stk.top() != '[') {
				check = false;
				break;
			}
			// 올바른 입력
			else {
				//이 조건이 나오는 이유가 중요함.
				if (s[i - 1] == '[') {
					sum += temp;
				}
				stk.pop();
				temp /= 3;

			}

		}
	}

	//
	if (check == false || !stk.empty()) {
		cout << '0';
	}
	else {
		cout << sum;
	}

}