#include <string>
#include <vector>

using namespace std;

string solution(string s) {
	string answer = "";
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ') {
			answer += s[i];
			continue;
		}
		else
		{
			//�� ���ڰ� �����̰� ������ ù�� °�� �ƴϸ�
			if (s[i - 1] == ' ' || i == 0) {
				//s[i]�� �ҹ��ڸ� �빮�ڷ� �ٲٱ�                 
				if ('a' <= s[i] && s[i] <= 'z')
				{
					s[i] = s[i] - 'a' + 'A';
				}
			}
			else
			{
				//�빮�ڸ� �ҹ��ڷ� �ٲٱ�
				if ('A' <= s[i] && s[i] <= 'Z')
				{
					s[i] = s[i] - 'A' + 'a';
				}
			}
		}
		answer += s[i];
	}
	return answer;
}