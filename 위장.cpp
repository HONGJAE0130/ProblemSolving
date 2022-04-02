#include <string>
#include <vector>
#include <unordered_map>
using namespace std;
//�ǻ��� ������ ��� ���� ���� ���ϸ� ���� ������???

//clothes[i][1] => ���� �ϱ� �� ���� ���� ī��Ʈ �غ���;


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