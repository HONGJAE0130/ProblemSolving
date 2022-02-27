#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
	vector<int> answer(2);
	int cnt = 0;
	answer[0] = 0;
	answer[1] = 0;
	//s�� "1"�� �� �� ���� ���� �ݺ�
	while (s != "1")
	{
		string tmp = "";
		int size = 0, num;
		answer[0]++;

		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '0')
				answer[1]++;
			else
				tmp += "1";
		}
		//tmp�� ���̸� ���� ��ȯ �� ���� ���� S�� �ȴ�.
		num = tmp.size();
		s = "";             //S�� �ʱ�ȭ
		while (num > 0)
		{
			//to_string �� int -> string ��ȯ �Լ�
			//������ȯ 
			s += to_string(num % 2);
			num /= 2;
		}
	}
	return answer;
}