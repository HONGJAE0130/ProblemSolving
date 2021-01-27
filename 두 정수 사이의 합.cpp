#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
	long long answer = 0;
	if (a == b) return answer = a;
	else if (a < b) {
		while (a <= b) {
			answer = answer + a;
			a++;
		}
		return answer;
	}
	else {
		while (b <= a) {
			answer = answer + b;
			b++;
		}
		return answer;
	}
	return answer;
}