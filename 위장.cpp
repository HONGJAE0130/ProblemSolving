#include <string>
#include <vector>
#include <unordered_map>
using namespace std;
//의상의 종류가 몇가지 인지 세서 곱하면 되지 않을까???

//clothes[i][1] => 종류 니까 몇 가지 인지 카운트 해보자;


int solution(vector<vector<string>> clothes) {
	int answer = 1;
	unordered_map<string, int> kind;
	for (int i = 0; i < clothes.size(); i++) {
		kind[clothes[i][1]]++;
	}
	for (auto s : kind) {
		answer *= s.second + 1;
	}
	return answer - 1;
}