#include <string>
#include <vector>
#include <map>
#include <set>

using namespace std;

map<string, int> reportCnt; // 유저 별로 몇 번 신고당했는지 횟수 체크
map<string, set<string>> reportLog; //유저를 신고한 다른 유저리스트


vector<int> solution(vector<string> id_list, vector<string> report, int k) {
	vector<int> answer;

	for (int i = 0; i < report.size(); i++) {
		string s = report[i];
		int blank = s.find(' '); // 공백으로 [ 신고자' '피신고자] 구분
		string from = s.substr(0, blank); //신고자
		string to = s.substr(blank); //피신고자 

		// 신고자가 to를 신고한 적이 없으면 
		if (reportLog[from].find(to) == reportLog[from].end()) {
			reportCnt[to]++;
			reportLog[from].insert(to);
		}
	}

	for (int i = 0; i < id_list.size(); i++) {
		string s = id_list[i];
		int res = 0;

		//기준 k 이상 신고를 먹었으면 바로 push 
		for (string str : reportLog[s]) {			
			if (reportCnt[str] >= k) res++;
		}
		answer.push_back(res);
	}

	return answer;
}