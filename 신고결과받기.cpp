#include <string>
#include <vector>
#include <map>
#include <set>

using namespace std;

map<string, int> reportCnt; // ���� ���� �� �� �Ű���ߴ��� Ƚ�� üũ
map<string, set<string>> reportLog; //������ �Ű��� �ٸ� ��������Ʈ


vector<int> solution(vector<string> id_list, vector<string> report, int k) {
	vector<int> answer;

	for (int i = 0; i < report.size(); i++) {
		string s = report[i];
		int blank = s.find(' '); // �������� [ �Ű���' '�ǽŰ���] ����
		string from = s.substr(0, blank); //�Ű���
		string to = s.substr(blank); //�ǽŰ��� 

		// �Ű��ڰ� to�� �Ű��� ���� ������ 
		if (reportLog[from].find(to) == reportLog[from].end()) {
			reportCnt[to]++;
			reportLog[from].insert(to);
		}
	}

	for (int i = 0; i < id_list.size(); i++) {
		string s = id_list[i];
		int res = 0;

		//���� k �̻� �Ű� �Ծ����� �ٷ� push 
		for (string str : reportLog[s]) {			
			if (reportCnt[str] >= k) res++;
		}
		answer.push_back(res);
	}

	return answer;
}