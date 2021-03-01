#include <iostream>
#include <string>
#include <stack>
using namespace std;

int solution(string s)
{
	int answer = 0;
	stack <char> st;
	for (int i = 0; i < s.length(); i++)
	{
		if (st.empty() || st.top() != s[i]) st.push(s[i]);    //st가 비어있거나 스택의 윗부분이 다음 스트링의char이 다르면 스택에 char을 push
		else if (s[i] == st.top()) st.pop();                   //char , 스택의 top이 같다면 스택pop

	}
	if (!st.empty()) return 0;                               //스택이 비어있지 않다면 0
	else return 1;                                          //비었다면 return 1;

	return answer;
}