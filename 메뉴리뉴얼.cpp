#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

unordered_map<string, int> FoodMaps[11];									//unorderedmap�� �ؽ����̺�� �����Ѵ�. �ߺ������� X , 
int MaxCnt[11] = { 0 };

void comb(string str, int pos, string candiate) {
	if (pos >= str.length()) {
		int len = candiate.length();										//���� ����
		if (len >= 2) {														//���� ���� 2�� �̻��� ����
			FoodMaps[len][candiate]++;
			MaxCnt[len] = max(MaxCnt[len], FoodMaps[len][candiate]);		//�׻� ���帹�� Ƚ���� �����
		}
		return;
	}

	comb(str, pos + 1, candiate + str[pos]);								//���� ������ ����
	comb(str, pos + 1, candiate);											// �� ����
}

vector<string> solution(vector<string> orders, vector<int> course) {

	for (int i = 0; i < orders.size(); i++) {
		string str = orders[i];
		sort(str.begin(), str.end());										//���ĺ� ������ ����
		comb(str, 0, "");													//�ڽ� ������ ����� �Լ�
	}
	vector<string> answer;
	for (int len : course) {
		for (auto item : FoodMaps[len]) {									//item �� pair<string, int>�� ���´�.
			if (item.second >= 2 && item.second == MaxCnt[len]) {			//foodmaps[len]�� �̹� �ִ� ����� �ڽ��� ¥���ִ�. 2�� �̻��� �޴� && 
				answer.push_back(item.first);								//���� ���� �Ҹ� ���� push_back
			}
		}
	}
	sort(answer.begin(), answer.end());

	/*
	for (int i = 0; i < course.size(); i++) {                           //�� �޴��� �� �� ���Դ��� üũ
		int food[26] {0};

		for (int j = 0; j<orders[i].length(); j++) {
			food[orders[i][j] - 97]++;
		}
	}

	for (int i = 0; i <= 26; i++) {                                     //course[i] ��ŭ
		string cnt ="";
		for (int j = 0; j < course.size(); j++) {
			if (food[j] == course[i]) cnt += food[j];
		}

	}*/
	return answer;
}