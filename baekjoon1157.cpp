#include <string>
#include <iostream>
using namespace std;
int alpha[26] = { 0, };
int main()
{
	int i;
	int max = -1;
	int idx = -1;
	string s;
	cin >> s;                        //입력 
	for (i = 0; i < s.length(); i++)
	{
		if (s[i] < 97)                //대문자
			alpha[s[i] - 65]++;
		else                        //소문자
			alpha[s[i] - 97]++;
	}
	for (i = 0; i < 26; i++)             //가장 많은 알파벳 max
	{
		if (max < alpha[i])
		{
			max = alpha[i];
			idx = i;
		}
	}
	for (i = 0; i < 26; i++)       //많이 나온 알파벳 찾기
	{
		if (idx == i)
			continue;
		if (max == alpha[i])      //겹칠 시 ? 출력
		{
			cout << '?';
			return 0;
		}
	}
	cout << (char)(idx + 65);
	return 0;
}
