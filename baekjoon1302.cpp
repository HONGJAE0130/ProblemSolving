#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	int result = 0;
	cin >> n;
	string str;
	map<string, int> s;
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		s[str]++;
	}
	for (auto i = s.begin(); i != s.end(); i++)		// auto 는 형 변환을 자유롭게 할 수 있는 키워드
	{
		result = max(result, i->second);			//가장 큰  값 찾기
	}
	for (auto j = s.begin(); j != s.end(); j++)
	{										
		if (result == j->second) {					// 가장 큰 값이 있는 위치 찾기
			cout << j->first;
			return 0;
		}
	}

}