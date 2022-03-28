#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int need[8];
int use[8];
bool visited[8] = { false, };
int result = 0;
int num;
void find_dun(int cnt, int remain) {              //( �� �� �ִ� ���� , ���� �Ƿε� )
	for (int i = 0; i < num; i++) {
		if (!visited[i] & need[i] <= remain) {      // false�� �����Ƿε��� ������ �� �� ������
			visited[i] = true;                  // �湮 �ϰ� 
			find_dun(cnt + 1, remain - use[i]);      // ( ī��Ʈ �ø��� , ����� �Ƿε��� ����) �ٽ� Ž��
			visited[i] = false;                 // �ٽ� �ؾ��ϹǷ� false�� �ʱ�ȭ �س���
		}
	}
	result = max(result, cnt);
	return;
}
int solution(int k, vector<vector<int>> dungeons) {
	int answer = -1;
	num = dungeons.size();
	for (int i = 0; i < num; i++) {
		need[i] = dungeons[i][0];
		use[i] = dungeons[i][1];
	}
	find_dun(0, k);
	return answer = result;
}
