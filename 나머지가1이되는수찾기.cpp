//프로그래머스 월간 코드 챌린지 시즌 3 
//예제가 나눠지는 수가 없는 소수일 경우에는 N보다 -1되는 수를 찾아야 하기에 
//시간이 덜 걸리는 소수찾기 isPrime으로 소수를 찾았고 
//소수가 아닐 시에는 i를 1부터 진행시키는 방식으로 n을 나눴고 나머지가 1이되면 break; 로 멈췄다.
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
bool isPrime(int n) {
	if (n <= 1) {
		return false;
	}

	for (int i = 1; i <= sqrt(n); i++) {
		if ((n%i) == 0) {
			return false;
		}
	}
	return true;
}


int solution(int n) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int answer = 0;
	if (isPrime(n) == true) answer = n - 1;
	else {
		for (int i = 1; i < 1000000; i++)
		{
			if (n%i == 1) {
				answer = i;
				break;
			}
		}
	}
	return answer;
}