#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
	vector<int> answer(2);
	int cnt = 0;
	answer[0] = 0;
	answer[1] = 0;
	//s가 "1"이 될 때 까지 무한 반복
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
		//tmp의 길이를 이진 변환 한 것이 다음 S가 된다.
		num = tmp.size();
		s = "";             //S를 초기화
		while (num > 0)
		{
			//to_string 은 int -> string 변환 함수
			//이진변환 
			s += to_string(num % 2);
			num /= 2;
		}
	}
	return answer;
}