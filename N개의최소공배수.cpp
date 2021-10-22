//gcd와 , lcm 의 함수는 구현 해놓은게있으니 가져와서 사용했다.
//소수 판별하는 것과 같이 미리 구현해 놓은 함수가 있으면 편하게 문제를 풀 수 있었다.
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <string>
#include <vector>

using namespace std;
int GCD(int a, int b) {         // 최대공약수
	if (a == 0) return b;
	return GCD(b % a, a);
}
int LCM(int a, int b) {         // 최소공배수
	return a * b / GCD(a, b);
}
int solution(vector<int> arr) {
	int answer = 0;
	answer = arr[0];
	for (int i = 1; i < arr.size(); i++) {
		answer = LCM(answer, arr[i]);
	}
	return answer;
}