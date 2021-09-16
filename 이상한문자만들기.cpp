#include <string>
#include <vector>

using namespace std;

string solution(string s) {
	string answer = "";
	int count = 0; //홀짝인지 판별하는count
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == ' ') {  //s[i] 띄어쓰기면
			answer += ' ';
			count = 0;
		}
		else {
			count % 2 == 0 ? answer += toupper(s[i]) : answer += tolower(s[i]);
			// count % 2 가 0인가요?? 참이면 answer += toupper(s[i]) 거짓이면  answer += tolower(s[i]);
			count += 1;

		}
	}
	return answer;
}