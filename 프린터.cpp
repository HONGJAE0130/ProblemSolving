#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> priorities, int location) {
	int answer = 0;
	vector<pair<int, int>> v;

	for (int i = 0; i < priorities.size(); i++)
	{
		v.push_back({ priorities[i],i }); //(우선순위 , 위치)를 v에 저장
	}
	while (v.size() != 0)                  //v.size가 0이 될 때 까지
	{
		int pri = v[0].first;           //first 는 우선순위
		int idx = v[0].second;          //second는 인덱스

		bool c = true;
		for (int i = 1; i < v.size(); ++i)
		{
			if (v[i].first > pri)        //v[i].first > v[0].first
				c = false;
		}
		if (c) {                         //c==true;
			answer++;
			if (idx == location) break;
			v.erase(v.begin());
		}
		else {                          //c==false;
			v.push_back({ pri,idx });
			v.erase(v.begin());
		}
	}

	return answer;
}