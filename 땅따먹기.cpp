#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int> > land)
{
	/* 내가 처음에 생각한 코드는 그저 각 행의 최댓값들만 찾으면 된다고 해서  이렇게 짰지만 시간도  초과하고 결과도 엉망이다.
	int answer = 0;
	int max = 0;
	int j=0;
	int past=5;
	int size= land.size[0];
	for(int i=0; i<land.size(); i++)
	{

		max =land[i][j];
		while(size--)
		{
			if(land[i][j]>max && past !=j ) {
				max = land[i][j];
				past = j;
				break;
			}
		}
		answer += max;
	}
	이렇게 짜면 윗 행  + 아랫 행 을 둘 다 더했을 때 max 값을 찾게 해준다.
	*/
	int answer = 0;
	for (int i = 0; i < land.size() - 1; i++) {
		land[i + 1][0] += max(land[i][1], max(land[i][2], land[i][3]));
		land[i + 1][1] += max(land[i][0], max(land[i][2], land[i][3]));
		land[i + 1][2] += max(land[i][0], max(land[i][1], land[i][3]));
		land[i + 1][3] += max(land[i][0], max(land[i][1], land[i][2]));
	}
	answer = max(land[land.size() - 1][0], max(land[land.size() - 1][1], max(land[land.size() - 1][2], land[land.size() - 1][3])));

	return answer;
}