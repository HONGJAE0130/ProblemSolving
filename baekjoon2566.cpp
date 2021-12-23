#include <iostream>
#define N 9
using namespace std;
int x, y, result;
int main() {
	int tmp;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> tmp;

			if (tmp > result) {
				y = i;
				x = j;
				result = tmp;
			}
		}
	}
	cout << result << '\n';
	cout << y + 1 << " " << x + 1;
}