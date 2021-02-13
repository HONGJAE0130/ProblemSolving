#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int N;

bool mysort(string a, string b) {
	if (a.at(N) != b.at(N)) {
		return a.at(N) < b.at(N);   //N인덱스의 문자로 정렬
	}
	else {
		return a < b;   //사전순으로 정렬
	}
	//return a.at(N)==b.at(N) ? a < b : a.at(N) < b.at(N);
}

vector<string> solution(vector<string> strings, int n) {
	vector<string> answer;
	answer = strings;
	N = n;
	sort(answer.begin(), answer.end(), mysort);
	return answer;
}
