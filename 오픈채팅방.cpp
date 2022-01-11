#include <string>
#include <vector>
#include <map>											//pair와 map의 차이점을 알았다. 
#include <algorithm>
#include <iostream>
#include <sstream>										//sstream 헤더파일

using namespace std;

vector<string> solution(vector<string> record) {
	vector<string> answer, state;
	map<string, string> user;

	for (int i = 0; i < record.size(); i++)
	{
		string str[3];                                  //3칸의 str 생성 temp의 역할
		string token;
		stringstream ss(record[i]);                     //ss = record[i]를 공백을 기준으로 칸 수로 나눔
		int index = 0;

		while (ss >> token)                              //token에 대입
			str[index++] = token;                       //str[0][1][2]에 명령, id , 닉네임 삽입

		if (str[0] == "Enter")                           //명령어 
		{
			state.push_back("님이 들어왔습니다.");
			answer.push_back(str[1]);                   //answer에 id 삽입
			user[str[1]] = str[2];                      //user에는 닉네임 삽입
		}
		else if (str[0] == "Leave")
		{
			state.push_back("님이 나갔습니다.");          //명령어 출력 삽입
			answer.push_back(str[1]);                   //answer에는 id 삽입
		}
		else                                            //Change 일때
			user[str[1]] = str[2];                      //user 의 닉네임을 변경
	}

	for (int i = 0; i < answer.size(); i++)
		answer[i] = user[answer[i]] + state[i];			//정답은 state의 순서와 answer의 순서를 맞췄으니 그대로 answer에 삽입

	return answer;
}