#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

unordered_map<string, int> FoodMaps[11];									//unorderedmap은 해쉬테이블로 구현한다. 중복데이터 X , 
int MaxCnt[11] = { 0 };

void comb(string str, int pos, string candiate) {
	if (pos >= str.length()) {
		int len = candiate.length();										//음식 개수
		if (len >= 2) {														//음식 개수 2개 이상일 때만
			FoodMaps[len][candiate]++;
			MaxCnt[len] = max(MaxCnt[len], FoodMaps[len][candiate]);		//항상 가장많은 횟수가 저장됨
		}
		return;
	}

	comb(str, pos + 1, candiate + str[pos]);								//현재 포지션 포함
	comb(str, pos + 1, candiate);											// 안 포함
}

vector<string> solution(vector<string> orders, vector<int> course) {

	for (int i = 0; i < orders.size(); i++) {
		string str = orders[i];
		sort(str.begin(), str.end());										//알파벳 순으로 정렬
		comb(str, 0, "");													//코스 조합을 만드는 함수
	}
	vector<string> answer;
	for (int len : course) {
		for (auto item : FoodMaps[len]) {									//item 은 pair<string, int>로 나온다.
			if (item.second >= 2 && item.second == MaxCnt[len]) {			//foodmaps[len]은 이미 최대 값들로 코스가 짜여있다. 2개 이상의 메뉴 && 
				answer.push_back(item.first);								//가장 많이 불린 값을 push_back
			}
		}
	}
	sort(answer.begin(), answer.end());

	/*
	for (int i = 0; i < course.size(); i++) {                           //각 메뉴가 몇 번 나왔는지 체크
		int food[26] {0};

		for (int j = 0; j<orders[i].length(); j++) {
			food[orders[i][j] - 97]++;
		}
	}

	for (int i = 0; i <= 26; i++) {                                     //course[i] 만큼
		string cnt ="";
		for (int j = 0; j < course.size(); j++) {
			if (food[j] == course[i]) cnt += food[j];
		}

	}*/
	return answer;
}