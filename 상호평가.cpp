#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<vector<int>> scores) {
	string answer = "";
	for (int i = 0; i < scores[0].size(); i++) {
		double avg = 0;
		int mx, mn;
		for (int j = 0; j < scores[0].size(); j++)
		{
			avg += scores[j][i];
			mx = max(mx, scores[j][i]);
			mn = min(mn, scores[j][i]);
		}
		int maxcnt = 0, mincnt = 0;

		for (int j = 0; j < scores.size(); j++) {
			if (scores[j][i] == mx)  maxcnt++;
			else if (scores[j][i] == mn)  mincnt++;
		}
		int body = scores.size();
		if ((maxcnt == 1 && mx == scores[i][i]) || (mincnt == 1 && mn == scores[i][i])) {
			avg -= scores[i][i];
			body = (scores.size() - 1);
		}
		else {
			avg /= scores.size();
		}


		avg = avg / body;
		if (avg >= 90) answer += "A";
		else if (avg >= 80) answer += "B";
		else if (avg >= 70) answer += "C";
		else if (avg >= 50) answer += "D";
		else answer += "F";
	}
	return answer;
}