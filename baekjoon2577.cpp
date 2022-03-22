#include <iostream>
#include <cmath>
using namespace std;
int num[10] = { 0 };

int main() {
	int A, B, C;
	cin >> A >> B >> C;

	int result = A * B*C;
	while (result != 0) {
		num[result % 10]++;
		result = result / 10;
	}
	for (int i = 0; i <= 9; i++) {
		cout << num[i] << endl;
	}
	return 0;
}