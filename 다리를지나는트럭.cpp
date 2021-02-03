#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
	int answer = 0;
	int weight_sum = 0;
	//도로에 올라가져있는 차, 차마다 남은 거리
	queue<int> bridge, count;

	while (true) {
		int size = bridge.size();
		for (int i = 0; i < size; i++) {
			int length = bridge.front();
			bridge.pop();
			//도로에 남은 길이가 없다면
			if (length <= 1) {
				//도로에 현재차 무게를 제외
				weight_sum -= count.front();
				//도로에 올라가 있는 차 제외
				count.pop();
				continue;
			}
			//남아있다면 길이 감소후 다시 넣기
			bridge.push(length - 1);
		}
		//대기 트럭이 있고  && (지금 다리에 있는 차의 무게 + 대기 트럭 1순위 무게) <= 다리 하중)
		if (truck_weights.size() > 0 && weight_sum + truck_weights.at(0) <= weight) {
			//대기 0순위 트럭 추가
			count.push(truck_weights.at(0));
			//다리 위 무게 추가
			weight_sum += truck_weights.at(0);
			//다리 길이 만큼 추가
			bridge.push(bridge_length);
			//대기 트럭 0순위 제거 
			truck_weights.erase(truck_weights.begin());
		}
		//시간초 증가
		answer++;
		//대기 트럭이 없고 남은 다리의 거리가 0이면 break;
		if (truck_weights.size() == 0 && count.size() == 0)
			break;

	}

	return answer;

}