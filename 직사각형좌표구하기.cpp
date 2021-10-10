#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 직사각형의 모든 변이 x,y축에 평행하므로 문제는 x축에는 2개의 숫자가 사용되고  y축에는 2개의 숫자가 사용된다.

vector<int> solution(vector<vector<int> > v) {
	vector<int> ans;
	vector<int> x;
	vector<int> y;
	for (int i = 0; i < 3; i++)
	{
		x.push_back(v[i][0]);					//x축 
		y.push_back(v[i][1]);					//y축
	}
	sort(x.begin(), x.end());					//정렬
	sort(y.begin(), y.end());					//정렬
	if (x[0] == x[1]) ans.push_back(x[2]);		//x [ 0 1 2 ] 중에 가운데를 기준으로 비교하면 나머지 답이나온다.
	else ans.push_back(x[0]);
	if (y[0] == y[1]) ans.push_back(y[2]);		//ㅛ [ 0 1 2 ] 중에 가운데를 기준으로 비교하면 나머지 답이나온다.
	else ans.push_back(y[0]);


	return ans;
}