#include <string>
#include <vector>

using namespace std;

string solution(string s) {
	string answer = "";
	int count = 0; //Ȧ¦���� �Ǻ��ϴ�count
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == ' ') {  //s[i] �����
			answer += ' ';
			count = 0;
		}
		else {
			count % 2 == 0 ? answer += toupper(s[i]) : answer += tolower(s[i]);
			// count % 2 �� 0�ΰ���?? ���̸� answer += toupper(s[i]) �����̸�  answer += tolower(s[i]);
			count += 1;

		}
	}
	return answer;
}