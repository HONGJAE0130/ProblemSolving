#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
	bool answer = true;
	int count = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '(')
			count++;
		else if (s[i] == ')')
			count--;
		if (count < 0)
			return answer = false;
	}
	if (count < 0)
		return answer = false;
	else if (count > 0)
		return answer = false;
	else if (count == 0)
		return answer = true;

	return answer;
}