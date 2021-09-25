#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
	vector<int> answer;
	vector<int> temp;
	int all = brown + yellow;

	for (int i = 3;; i++)
	{
		if (!(all%i)) {
			int weight = all / i;
			if ((i + weight) * 2 - 4 == brown) {
				answer.push_back(weight);
				answer.push_back(i);
				break;
			}
		}
	}
	return answer;
}