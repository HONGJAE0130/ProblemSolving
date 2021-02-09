#include <string>
#include <vector>

using namespace std;

int max(int a, int b) {
	return a < b ? b : a;
}
vector<int> solution(vector<int> answers) {
	vector<int> answer;
	vector<int> a = { 1,2,3,4,5 };
	vector<int> b = { 2,1,2,3,2,4,2,5 };
	vector<int> c = { 3,3,1,1,2,2,4,4,5,5 };
	vector<int> score(3);
	int maxScore = 0;

	for (int i = 0; i < answers.size(); i++)
	{
		if (a[i % 5] == answers[i]) {
			score[0]++;
		}
		if (b[i % 8] == answers[i]) {
			score[1]++;
		}
		if (c[i % 10] == answers[i]) {
			score[2]++;
		}
	}
	maxScore = max(max(score[0], score[1]), score[2]);


	for (int i = 0; i < 3; i++) {
		if (score[i] == maxScore) answer.push_back(i + 1);
	}
	return answer;
}