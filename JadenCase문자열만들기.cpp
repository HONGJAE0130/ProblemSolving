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
			//앞 글자가 공백이고 문장의 첫번 째가 아니면
			if (s[i - 1] == ' ' || i == 0) {
				//s[i]가 소문자면 대문자로 바꾸기                 
				if ('a' <= s[i] && s[i] <= 'z')
				{
					s[i] = s[i] - 'a' + 'A';
				}
			}
			else
			{
				//대문자면 소문자로 바꾸기
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