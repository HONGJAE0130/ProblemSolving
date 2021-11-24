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
	//�й��Ģ���� Ǯ���.
	for (int i = 0; i < s.length(); i++) {


		if (s[i] == '(') {
			stk.push(s[i]);
			temp *= 2;
		}
		else if (s[i] == ')') {
			//�ùٸ��� ���� �Է�
			if (stk.empty() || stk.top() != '(') {
				check = false;
				break;
			}
			//�ùٸ� �Է�
			else {
				//�� ������ ������ ������ �߿���.
				// '���� ��ȣ�� ������ ���� ������ ���� �Ǵ� ���� �ƴ�'
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
			//�ùٸ��� ���� �Է�
			if (stk.empty() || stk.top() != '[') {
				check = false;
				break;
			}
			// �ùٸ� �Է�
			else {
				//�� ������ ������ ������ �߿���.
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