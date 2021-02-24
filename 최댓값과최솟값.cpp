#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
	string answer = "";
	string tmp;
	vector<int> v;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == ' ')                          //공백일시 
		{
			v.push_back(atoi(tmp.c_str()));    //atoi 함수 => 문자열을 정수로 변환시켜주는 함수   c_str함수 => string을 char* 형으로 변환
			tmp.clear();
		}
		else                                    //tmp에 더하기
		{
			tmp += s[i];
		}
	}
	v.push_back(atoi(tmp.c_str()));
	sort(v.begin(), v.end(), greater<int>());      //오름차순 정렬
	answer += to_string(v.back()) + " " + to_string(v.front()); //to_string으로 int를 string으로 sort한 내용의 앞과 끝을 answer에 저장 

	return answer;
}