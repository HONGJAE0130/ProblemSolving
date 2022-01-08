#include <iostream>
#include <cmath>

using namespace std;

int main(int a, int b, int budget) {
	int answer = 0;

	for (int i = 0; i <= budget / a; i++) {
		for (int j = 0; j <= budget-(i*a) / b; j++) {
			if (i*a + j * b == budget) answer++;
		}
	}

	return answer;
}