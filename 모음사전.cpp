#include <string>
#include <vector>
#include <iostream>

using namespace std;

int dic[5] = { 781,156,31,6,1 };
int solution(string word) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string vowel = "AEIOU";

	int answer = 0;
	int len = word.length();
	// 781 + 156 + 31 + 6 + 1  
	//s[5] == 1; 
	//s[4] == 5^1 + s[5]; 
	//s[3] == 5^2 + s[4];
	//s[2] == 5^3 + s[3];
	//s[1] == 5^4 + s[2];
	for (int i = 0; i < word.size(); i++)
	{
		answer += vowel.find(word[i]) * dic[i] + 1;
	}
	return answer;
}