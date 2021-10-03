#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	string s, t;
	cin >> s;
	cin >> t;
	string answer = "";
	int tIdx = t.length() - 1;
	for (int i = 0; i < s.length(); i++)
	{
		answer += s[i];
		if (answer[answer.length() - 1] == t[tIdx]) {     //answer�� ������ ���ڰ� t�� ������ ���ڿ� ������
			if (answer.length() >= t.length()) {         //answer�� ���̰� ��ź�� ���̺��� ���
				int cnt = 1;
				for (int j = tIdx - 1; j >= 0; j--) {        //
					if (answer[answer.length() - 1 - (tIdx - j)] != t[j]) //answer�� ���κ� ���� 
						break;
					cnt++;
				}
				if (cnt == t.length()) {
					for (int b = 0; b < t.length(); b++) {
						answer.pop_back();
					}
				}
			}
		}
	}
	if (answer.empty())
		cout << "FRULA" << '\n';
	else
		cout << answer << '\n';

	return 0;
}