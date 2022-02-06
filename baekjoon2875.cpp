#include <iostream>

using namespace std;

int main() {
	int N, M, K, answer = 0;
	cin >> N >> M >> K;
	answer = min(M, N / 2);
	//남학생이 1명이니까 여학생/2 해서 최대 팀을 구하고
	answer = min(answer, (N + M - K) / 3);
	//그 구한 값하고 한 팀에는 3명 씩( /3 ) 인턴쉽 ( -K) 를 팀을 만든다

	cout << answer;
}