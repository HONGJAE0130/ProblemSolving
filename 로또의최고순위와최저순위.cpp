#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
	vector<int> answer;
	int win = 0;
	int zerocnt = 0;
	int j = 0;
	for (int i = 0; i < 6; i++)
	{
		if (lottos[i] == 0) zerocnt++;
		for (int j = 0; j < 6; j++)
		{
			if (lottos[i] == win_nums[j]) win++;
		}
	}

	int top = 7 - (zerocnt + win);
	int bottom = 7 - win;
	if (bottom == 7) bottom = 6;
	if (zerocnt == 0 && win == 0) { top = 6, bottom = 6; }
	answer.push_back(top);
	answer.push_back(bottom);
	return answer;
}