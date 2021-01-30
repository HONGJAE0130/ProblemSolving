#include <string>
#include <vector>

using namespace std;

string solution(string s) {
	string answer = "";
	int i = s.length() % 2;
	if (i == 0)
		answer = s.[s.length() / 2] + s.[s.length() / 2 + 1];
	else if (i == 1)
		answer = s.at[s.length() / 2 + 1];
	return answer;
}