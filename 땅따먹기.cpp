#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int> > land)
{
	/* ���� ó���� ������ �ڵ�� ���� �� ���� �ִ񰪵鸸 ã���� �ȴٰ� �ؼ�  �̷��� ®���� �ð���  �ʰ��ϰ� ����� �����̴�.
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
	�̷��� ¥�� �� ��  + �Ʒ� �� �� �� �� ������ �� max ���� ã�� ���ش�.
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