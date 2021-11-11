#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	string s = "";
	getline(cin, s);					//�����̽��� �����ϴ� ���ڿ��� �ޱ⶧���� getline�� ����Ѵ�.
	s += '\n';
	stack<char> st;
	bool check = false;
	for (int i = 0; i < s.size(); i++) {

		if (s[i] == '<') {					//< > �� �Էµ��� ���� �׳� �׷��� ���
			while (!st.empty()) {
				cout << st.top();
				st.pop();
			}
			cout << "<";
			check = true;
		}
		else if (s[i] == '>') {
			cout << ">";
			check = false;
		}
		else if (check) cout << s[i]; //�׳� ���ڸ��� �������

		else if (s[i] == ' ' || s[i] == '\n') {		//���� ���
			while (!st.empty()) {
				cout << st.top();
				st.pop();
			}
			cout << " ";			
		}
		else st.push(s[i]);			//
	}
	return 0;
}
