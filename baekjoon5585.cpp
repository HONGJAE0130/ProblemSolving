#include <iostream>
using namespace std;

int main(void) {
	int input;
	cin >> input;

	input = 1000 - input;
	int answer = 0;

	if (input / 500 > 0) {
		answer += input / 500;
		input -= (input / 500) * 500;
	}
	if (input / 100 > 0) {
		answer += input / 100;
		input -= (input / 100) * 100;
	}
	if (input / 50 > 0) {
		answer += input / 50;
		input -= (input / 50) * 50;
	}
	if (input / 10 > 0) {
		answer += input / 10;
		input -= (input / 10) * 10;
	}
	if (input / 5 > 0) {
		answer += input / 5;
		input -= (input / 5) * 5;
	}
	answer += input;

	printf("%d", answer);
}