#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
	vector<int> answer;
	queue<int> q;

	for (int i = 0; i < progresses.size(); i++) {
		int dayCount = 0;
		while (progresses[i] < 100) {
			progresses[i] += speeds[i];				// [i]번째 100이 될때까지 카운트
			dayCount++;
		}
		q.push(dayCount);                           // 각자 100 되면 q에 푸쉬 
	}
	int max = 1;									
	int curr = q.front();                           // curr == 스택 프론트 지정
	q.pop();										  
	while (!q.empty()) {							
		if (q.front() <= curr) {					
			q.pop();
			max++;
		}
		else {
			answer.push_back(max);
			max = 1;
			curr = q.front();
			q.pop();
		}
	}
	answer.push_back(max);


	return answer;
}