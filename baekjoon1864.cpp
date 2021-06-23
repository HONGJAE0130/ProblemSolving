#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;

	while (1) {
		cin >> input;
		int sum = 0, coef = 0;
		if (input.size() == 1 && input[0] == '#') break;
		for (int i = 0; i < input.size(); i++) {
			int mul = 1;
			for (int j = 1; j < input.size() - i; j++) {
				mul *= 8;
			}
			switch (input[i]) {
			case '-':
				coef = 0;
				break;
			case '\\':
				coef = 1;
				break;
			case '(':
				coef = 2;
				break;
			case '@':
				coef = 3;
				break;
			case '?':
				coef = 4;
				break;
			case '>':
				coef = 5;
				break;
			case '&':
				coef = 6;
				break;
			case '%':
				coef = 7;
				break;
			case '/':
				coef = -1;
				break;
			}
			sum += coef * mul;
		}
		cout << sum << endl;
	}
	return 0;
}