#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> numbers) {
	int k;
	vector<int> answer;

	for (int i = 0; i < numbers.size() - 1; i++) {
		for (int j = i + 1; j < numbers.size(); j++) {
			k = numbers[i] + numbers[j];
			if (find(answer.begin(), answer.end(), k) == answer.end()) {
				answer.push_back(k);
			}
		}
	}
	sort(answer.begin(), answer.end());
	return answer;
}