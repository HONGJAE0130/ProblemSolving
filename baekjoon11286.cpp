#include <iostream>
#include <queue>
#include <vector>
#include <map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;

	priority_queue<pair<int, int>> q; //우선순위 큐 헤더파일 제공
	//for(int i=0;i<N;i++)
	while (N--)
	{
		int x;
		cin >> x;
		if (x == 0) {
			if (q.empty()) cout << "0\n"; // 비어있으면 0출력            
			else {
				cout << -q.top().second << "\n"; // top출력
				q.pop(); // 출력 후 제거
			}
		}
		else {       //x != 0 이면
			q.push({ -abs(x),-x });   //숫자 삽입
		}
	}
	return 0;
}
