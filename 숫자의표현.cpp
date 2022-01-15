#include <string>
#include <vector>

using namespace std;

int solution(int n) {// 15를 기준으로  7 8 이므로 기준숫자의 절반 값부터 for문을 돌려야지 효율적이다.
	int num = (n + 1) / 2;
	int sum = 0, answer = 1, j = 1;

	for (int i = 1; i <= num; i++) { //1 ~ n의 절반값 까지
		sum += i;
		if (sum >= n) {
			while (sum > n) sum -= j++;
			if (sum == n) answer++;
		}
	}

	return answer;
}