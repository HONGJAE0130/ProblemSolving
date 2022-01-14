#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>			//key값과 value값으로 구성 
#include <sstream>

using namespace std;

vector<int> solution(vector<string> info, vector<string> query) {
	vector<int> answer(query.size(), 0);		//쿼리 사이즈 = answer의 사이즈 
	map<string, vector<int>> m;					

	for (int i = 0; i < info.size(); i++) {
		string token;							//sstream을 사용하기 위한 string
		stringstream ss(info[i]);				//ss에 사용자의 정보 공간으로 확보
		vector<vector<string>> str(4, vector<string>(2, "-"));      //이중 벡터 str[4][[-,-]] 생성
		int index = 0, score = 0;

		while (ss >> token) {										//반복문 token에 ss를 삽입
			if (index < 4) {										//
				str[index++][0] = token;							//str[0->3][0] = 에 info 들을 삽입 점수  0 1 2 3 
			}
			else {													//info으 마지막은 코테 점수 이므로 
				score = stoi(token);								//string to int 를 써서 점수를 int화
			}
		}

		for (int i = 0; i < 2; i++) {			
			string t1, t2, t3, t4;
			t1 = str[0][i];											
			for (int j = 0; j < 2; j++) {
				t2 = str[1][j];
				for (int k = 0; k < 2; k++) {
					t3 = str[2][k];
					for (int l = 0; l < 2; l++) {
						t4 = str[3][l];
						m[t1 + t2 + t3 + t4].push_back(score);
					}
				}
			}
		}
	}

	for (auto itr = m.begin(); itr != m.end(); itr++) {
		sort(itr->second.begin(), itr->second.end());
	}

	for (int i = 0; i < query.size(); i++) {
		string str = "", token;
		stringstream ss(query[i]);
		int index = 0, score = 0;

		while (ss >> token) {
			if (token == "and") {
				continue;
			}

			if (index++ < 4) {
				str += token;
			}
			else {
				score = stoi(token);
			}
		}

		auto itr = lower_bound(m[str].begin(), m[str].end(), score);					//score보다 큰 이상의 점수의 사람 수 몇 명인지 찾아서 itr에 입력
																						//score보다 큰 이상의 점수의 사람 수 몇 명인지 찾아서 itr에 입력
		answer[i] = m[str].size() - (itr - m[str].begin());								//score보다 큰 이상의 점수의 사람 수 몇 명인지 찾아서 itr에 입력
	}

	return answer;
}