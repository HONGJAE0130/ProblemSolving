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
void find_dun(int cnt, int remain) {              //( 갈 수 있는 던전 , 남은 피로도 )
	for (int i = 0; i < num; i++) {
		if (!visited[i] & need[i] <= remain) {      // false고 남은피로도로 던전을 돌 수 있으면
			visited[i] = true;                  // 방문 하고 
			find_dun(cnt + 1, remain - use[i]);      // ( 카운트 늘리고 , 사용한 피로도를 빼고) 다시 탐색
			visited[i] = false;                 // 다시 해야하므로 false로 초기화 해놓기
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
